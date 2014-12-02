#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[]="mama", b[]="mila", c[]="ramu";

    printf("%s %s %s\n", a, b, c);
    printf("%s %s %s\n", a, c, b);
    printf("%s %s %s\n", b, a, c);
    printf("%s %s %s\n", b, c, a);
    printf("%s %s %s\n", c, a, b);
    printf("%s %s %s\n", c, b, a);



    return 0;
}
