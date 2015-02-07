#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, p, L;
        printf("Enter a number x = ");
        scanf("%d", &x);
        printf("Enter a number L = ");
        scanf("%d", &L);

    int a=1;
    for(p=0; a<=L; p++)
    {
       a*=x;
    }
        printf("%d",p-1);

    return 0;
}
