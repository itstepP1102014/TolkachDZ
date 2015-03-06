#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int r, n, c;
    time_t t;

    printf("Enter the number:");
    scanf("%d", &n);

    srand((unsigned) time(&t));
    r = rand() % 99;

    c =1;

    while (n != r && c < 5)
    {
        if (n < r)
            printf("Entered number is smaller than rand number");
        if (n > r)
            printf("Entered number is bigger than rand number");

        printf("Enter the number again:");
        scanf("%d", &n);

        c ++;
    }

    if (n == r)

    printf("Conglaturation your number is truuue!!");

    else

    printf("LOOOOOOOL!!!, true number is: %d", r);

    return 0;
}
