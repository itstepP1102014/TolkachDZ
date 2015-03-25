#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* BAG1:

    long long int a=0xFEFEFEFEFEFEFEFE;
    char str[9]="mamarama";
    long long int b=0xDADADADADADADADA;

    printf("%s\n", str);

    for(char *p=str; *p; ++p)
        {
            printf("%c\t%#X\n", *p, *p);
        }
*/

    /* BAG2:

        char *str1="mama";
    char str2[5]="mama";
  //  printf("%s %s\n", str1, str2);
    str2[0]='r';
    printf("%s %s\n", str1, str2);
*/



    return 0;
}
