#include <stdio.h>
#include <stdlib.h>

int main()
{
  int hours1, minutes1, seconds1;

    printf("Enter your time: ");
    scanf("%2d", &hours1);
    scanf("%2d", &minutes1);
    scanf("%2d", &seconds1);


  int hours2, minutes2, seconds2;

    printf("Enter your time: ");
    scanf("%2d", &hours2);
    scanf("%2d", &minutes2);
    scanf("%2d", &seconds2);


  int hours3, minutes3, seconds3;

    printf("Enter your time: ");
    scanf("%2d", &hours3);
    scanf("%2d", &minutes3);
    scanf("%2d", &seconds3);


    printf("%02d:%02d:%02d\n", hours1, minutes1, seconds1);
    printf("%02d:%02d:%02d\n", hours2, minutes2, seconds2);
    printf("%02d:%02d:%02d", hours3, minutes3, seconds3);


    return 0;
}
