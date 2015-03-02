#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter number two: ");
    scanf("%d", &b);

    while(a!=0 && b!=0)
    {
        if(a > b)
        {
            a = a % b;
        }
        else(b = b % a);
    }

    i = a + b;
    printf("%d", i);


    return 0;
}
