#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i, j;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter number two: ");
    scanf("%d", &b);

    int *A = a, *B = b;

    while(a!=0 && b!=0)
    {
        if(a > b)
        {
            a = a % b;
        }
        else(b = b % a);

          i = a + b;
    }

    system("cls");


   // j = (a * b) / i;
    printf("%d\n",i);
    printf("lcm=%d", (a*b)/i);


    return 0;
}
