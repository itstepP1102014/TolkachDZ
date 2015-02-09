#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int m[3][3] = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };

void displayX0(int i)
{
    if (i == 0)
        printf(" ");
    else if (i == 1)
        printf("X");
    else
        printf("0");
}

//Oтображение игровой ситуации на экран
void display()
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(j % 2 == 0 && i % 2 == 0)
            {
                displayX0(m[i / 2][j / 2]);
            }
                else if (i %2 == 0)
                {
                     printf("|");
                }
                else
                {
                    printf("-");
                }
        }

        printf("end1");

    }

}

//функция хода
bool motion(int where, int what)
{
    bool ok = false;
    switch(where)
    {
    case 1:
        if(m[0][0]==0){
           m[0][0] = what;
           ok = true;
        }
        else
        {
            printf("Wrong number!\n");
        }
        break;
    case 2:
    if(m[0][1]==0){
       m[0][1] = what;
     ok = true;
    }
        break;
    case 3:
    if(m[0][2]==0){
       m[0][2] = what;
     ok = true;
    }
        break;
        case 4:
    if(m[1][0]==0){
       m[1][0] = what;
     ok = true;
    }
        break;
        case 5:
    if(m[1][1]==0){
       m[1][1] = what;
     ok = true;
    }
        break;
        case 6:
    if(m[1][2]==0){
       m[1][2] = what;
     ok = true;
    }
        break;
        case 7:
    if(m[2][0]==0){
       m[2][0] = what;
     ok = true;
    }
        break;
        case 8:
    if(m[2][1]==0){
       m[2][1] = what;
     ok = true;
    }
        break;
        case 9:
    if(m[2][2]==0){
       m[2][2] = what;
     ok = true;
    }
        break;

    return ok;

}
//Человек ходит
void man()
{
    int x;
    do{
    printf("Enter number:\n");
    scanf("%d", &x);
    }while(!motion(x, 1));


}

void computer()
{
    int x;
    do{
    srand(time(NULL));
    x = 1 + rand() %9;
    }while(!motion(x, 2));
}

//1 - игра продолжается
//2 - если ничья
//3 - если победи комп
//4 - если победил человек
int check()
{

}

int main()
{
    display();


}

