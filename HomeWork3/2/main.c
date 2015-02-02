#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1, j;

    printf("Enter your number: ");
    scanf("%d", &j);

    while (i<=j)
    {
        printf("%d ", i);
        ++i;
    }

    return 0;
}
