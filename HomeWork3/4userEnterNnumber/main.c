#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter your amt numbers: ", n);
    scanf("%d", &n);

    int u, b=1;
    for (int i=1; i<=n; i++)
    {
        printf("Enter %d number:", i, u);
        scanf("%d", &u);

    printf("%d", b*=u);
    }

    return 0;
}
