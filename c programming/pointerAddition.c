#include<stdio.h>

void main()
{
    int *p1, *p2, a, b;
    p1 = &a;
    p2 = &b;
    printf("Enter first number: ");
    scanf("%d",p1);
    printf("Enter second number: ");
    scanf("%d",p2);
    printf("%d + %d = %d",*p1,*p2,((*p1)+(*p2)));

}
