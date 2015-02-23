#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    do
    {
    printf("Enter Amt Numbers(> 0):");
    scanf("%d", &a);
        if(a == 1)
        {
            printf("LoL! You Amt Numbers = 1! Please, Enter Number >1!\n");
        }
    }while(a < 2);

    int n, i = 1;

    printf("1,Enter The Number: ",n);
    scanf("%d",&n);

    int max=n, min=n;

    for(i = 2; i <= a; i++)
    {
        printf("%d, Enter a number: ", i);
        scanf("%d", &n);

        max = n >= max ? n : max;
        min = n < min ? n : min;

    }
    printf("max = %d\nmin = %d\n", max, min);


    return 0;
}
