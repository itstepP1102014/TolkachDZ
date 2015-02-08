#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int h, r;
    printf("Enter high: \n");
    scanf("%d", &h);
    printf("Enter radius: \n");
    scanf("%d", &r);

    printf("V = %lf\n", (1.0/3.0)*M_PI*(r^2)*h);

    printf("S = %lf", (M_PI*(r^2))+(M_PI*r*(sqrt((r^2)+(h^2)))));
    return 0;
}
