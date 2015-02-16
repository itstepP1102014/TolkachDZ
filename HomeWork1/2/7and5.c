#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Vvod 1go chisla = ");
    scanf("%d",&a);

    printf("Vvod 2go chisla = ");
    scanf("%d",&b);

    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);
    printf("%d %% %d = %d\n", a, b, a%b);

    return 0;
}
