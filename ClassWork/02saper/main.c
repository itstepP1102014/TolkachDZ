#define _XOPEN_EXTENDED
#define _POSIX_C_SOURCE 199309L

#include <sys/ioctl.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <locale.h>

void treatSigWinch(int singo);
void initialiseProgram();
enum Colors{normal,green,red};
char closeCell[4] = "\342\227\206";
char flaggetCell[4] = "\342\227\204";

enum State {opened, hidden, flagged};

#define ROWS 15
#define COLS 17

int main()
{
    initialiseProgram();

    attron(COLOR_PAIR(1));
    printw("Hello world!");
    attroff(COLOR_PAIR(1));
    refresh();
    getch();

    return 0;

}

void initialiseProgram()
{
    setlocale(LC_ALL, "");
    initscr();
    signal (SIGWINCH, treatSigWinch);
    if(has_colors() == FALSE)
    {
        endwin();
        fprintf(stderr, "no colors\n");
        exit(1);
    }
    cbreak();
    noecho();
    curs_set(0);
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    //init_pair(normal, COLOR_WHITE, COLOR_BLACK);
    //init_pair(green, COLOR_GREEN, COLOR_BLACK);
    //init_pair(red, COLOR_RED, COLOR_BLACK);
}

void treatSigWinch(int signo)
{
    struct winsize size;
    ioctl(fileno(stdout), TIOCGWINSZ, (char *) &size);
    resizeterm(size.ws_row, size.ws_col);
}
