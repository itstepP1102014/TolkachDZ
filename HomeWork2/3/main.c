#include <stdio.h>
#include <stdlib.h>

int main()
{
    char J[]="Jack";
    double   j1, j2;
    printf("Jack's fut 1: \n");
        scanf("%lf", &j1);
    printf("Jack's fut 2: \n");
        scanf("%lf", &j2);

    char W[]="William";
    double   w1, w2;
    printf("William's fut 1: \n");
        scanf("%lf", &w1);
    printf("William's fut 2:\n");
        scanf("%lf", &w2);

    char S[]="Sue";
    double s1, s2;
    printf("Sue's fut 1: \n");
        scanf("%lf", &s1);
    printf("Sue's fut 2: \n");
        scanf("%lf", &s2);

    char H[]="Hulk";
    double h1, h2;
    printf("Hulk's fut 1: \n");
        scanf("%lf", &h1);
    printf("Hulk's fut 2: \n");
        scanf("%lf", &h2);


    printf("%8s | % -.3lf\n", J, j1-j2);
    printf("%8s | % -.3lf\n", W, w1-w2);
    printf("%8s | % -.3lf\n", S, s1-s2);
    printf("%8s | % -.3lf\n", H, h1-h2);

    return 0;
}
