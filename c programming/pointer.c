/*pointer ==> points memory space
==> is a variable that points another variable.
*/

#include<stdio.h>

void main()
{
    int a,*p;
    p = &a;
    printf("*p => %d\n",*p);
    printf("a => %d\n",a);
    printf("p => %X\n",p);
    printf("&a => %x\n",&a);
}

