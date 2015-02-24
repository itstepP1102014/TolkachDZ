#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amt, n1 = 1, n2 = 1;
    printf("Fibonacci numbers as you want to see: ");
    scanf("%d", &amt);
    if(amt == 1)
    {
        printf("%d", n1);
    }
    else
    {
        printf("%d %d ", n1, n2);

        int n3;

        for(int i = 3; i <= amt; ++i)
        {
            n3 = n2 + n1;

            printf("%u ", n3);

            n1 = n2;
            n2 = n3;
        }
    }

    return 0;
}
