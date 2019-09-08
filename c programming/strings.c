/*
String
==> collection characters
==> character array
==> char name[10];

a p p l e \0
_ _ _ _ _ _ _ _ _ _
1 2 3 4 5 6 7 8 9 10
0 1 2 3 4 5 6 7 8 9

*/
#include<stdio.h>
void main()
{
    char name[20], sec;
    printf("Enter your name : ");
    gets(name);
    //scanf(" %s",name);
    printf("Enter your section : ");
    sec = getchar();
    putchar(sec);
    printf("\n");
    //scanf(" %c",&sec);
    puts(name);
    printf("Name : %s\nSection: %c",name,sec);
}





