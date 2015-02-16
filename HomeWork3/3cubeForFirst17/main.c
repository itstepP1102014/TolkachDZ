#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i=1; i<=33; i=2+i)
    {
    int c=i*i*i;
        printf("%d\n", c);
    }
    return 0;
}
