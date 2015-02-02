#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i<=n)
    {
        printf("%d", i, ' ');
        ++i;
    }
    return 0;
}
