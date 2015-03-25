#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <stdbool.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

int main()
{
    system("pwd");
    if(SDL_Init(SDL_INIT_VIDEO)!=0)
    {
        fprintf(stderr, "SDL_Init Error:"
                        "%s\n", SDL_GetError());
        exit(1);
    }

    SDL_Window *win = SDL_CreateWindow("Hello World", 100, 100, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

    if(win == NULL)
    {
        fprintf(stderr, "SDL_CreateWindow Error: %s\n", SDL_GetError());
        exit(1);
    }

    SDL_Renderer *ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    if(ren == NULL) {
        SDL_DestroyWindow(win);
        fprintf(stderr, "SDL_CreateRenderer Error: %s\n", SDL_GetError());
        SDL_Quit();
        exit(1);
    }

    SDL_Surface *bmp = SDL_LoadBMP("hello.bmp");

    if(bmp == NULL) {
        SDL_DestroyRenderer(ren);
        SDL_DestroyWindow(win);
        fprintf(stderr, "SDL_LoadBMP Error: %s\n", SDL_GetError());
        SDL_Quit();
        exit(1);
    }

    SDL_Texture *tex = SDL_CreateTextureFromSurface(ren, bmp);
    SDL_FreeSurface(bmp);

    if(tex == NULL) {
        SDL_DestroyRenderer(ren);
        SDL_DestroyWindow(win);
        fprintf(stderr, "SDL_CreateTextureFromSurface Error: %s\n", SDL_GetError());
        SDL_Quit();
        exit(1);
    }

    SDL_RenderClear(ren);

    SDL_RenderCopy(ren, tex, NULL, NULL);


    bool quit = false;

    SDL_Event e;

    int x = 10, y = 10;

    while(!quit)
    {
        while(SDL_PollEvent(&e) != 0) {
            if(e.type == SDL_QUIT) { quit = true; }
            if(e.type == SDL_KEYDOWN) {
                SDL_KeyboardEvent kEvent = e.key;
                if(kEvent.keysym.scancode == SDL_SCANCODE_A)
                {
                    x = (x - 1 + SCREEN_WIDTH) % SCREEN_WIDTH;
                }

                                if(kEvent.keysym.scancode == SDL_SCANCODE_S)
                {
                    y = (y + 1 + SCREEN_HEIGHT) % SCREEN_HEIGHT;
                }

                                if(kEvent.keysym.scancode == SDL_SCANCODE_W)
                {
                    y = (y - 1 + SCREEN_HEIGHT) % SCREEN_HEIGHT;
                }

                                if(kEvent.keysym.scancode == SDL_SCANCODE_D)
                {
                    x = (x + 1 + SCREEN_WIDTH) % SCREEN_WIDTH;
                }
            }
            if(e.type == SDL_MOUSEBUTTONDOWN) { quit = true; }
        }

        SDL_SetRenderDrawColor(ren, 0x00, 0x00, 0x00, 0xFF);
        SDL_RenderClear(ren);
        SDL_SetRenderDrawColor(ren, 0xFF, 0xFF, 0xFF, 0xFF);
        SDL_RenderDrawLine(ren, x, y, SCREEN_WIDTH/2, SCREEN_HEIGHT/2);
        SDL_RenderPresent(ren);
    }

    SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();

    return 0;
}
