#include <stdio.h>
#include <stdlib.h>

int main()
{   int x, p, a=1, i, w;

    printf("Enter number:");
    scanf("%d", &x);
    printf("Enter exponent:");
    scanf("%d", &p);

    for(i=0; i<abs(p); i++)
    {
       w = a *= x;
    }

    if(p < 0)
    {
        printf("answer: %f", 1.0/w);
    }

    else
    {
        printf("answer: %d", w);
    }




    return 0;
}
