#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   int x, p, a;
    printf("Enter x number: \n");
    scanf("%d", &x);
    printf("Enter p exponent: \n");
    scanf("%d", &p);
a = scalbn(x,p);
    printf("%d", a);
    return 0;
}
