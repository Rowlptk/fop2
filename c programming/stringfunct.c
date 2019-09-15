#include<stdio.h>
#include<string.h>

void main()
{
    char str[100];
    printf("Enter any String: \n\n");
    gets(str);
    printf("\nThe length of a string is:\n%d", strlen(str));

    printf("\n\nReverse is:\n");
    puts(strrev(str));

    printf("\n\nUppercase is:\n");
    puts(strupr(str));

    printf("\n\nLowercase is:\n");
    puts(strlwr(str));
}
