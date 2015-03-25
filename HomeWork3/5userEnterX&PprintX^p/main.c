#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   int x, p, a=1;

    printf("Enter p exponent: \n");
    scanf("%d", &p);
for (i=1; i<=p; i++)
    printf("Enter x number: \n");
    scanf("%d", &x);

    printf("%d", a*=x);
    return 0;
}
