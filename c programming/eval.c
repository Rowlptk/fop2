//x = a*b + a*b*c

#include<stdio.h>
void main()
{
    int a,b,c,x;
    printf("Enter three integers:\n");
    scanf("%d-%d-%d",&a,&b,&c);
    x = a*b+a*b*c;
    //printf("the value of x is %d",x);
    printf("%d x %d + %d x %d x %d = %d",a,b,a,b,c,x);
}
