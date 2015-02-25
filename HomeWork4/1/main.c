#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    for(i; i <= 127; i++)
    {
        if( i % 16 == 0)
        {
            printf("\n");
        }
        printf("%d ", i);
    }

    return 0;
}
