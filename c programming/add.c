#include<stdio.h>
// 23 + 45 = 68
// A,B,C  ==> X = A*B + A*B*C
void main()
{
    int X, Y, sum;
    printf("Enter two Integers X and Y");
    scanf("%d%d",&X,&Y);
    //X = 23;
    //Y = 45;
    sum = X + Y;
    printf("%d + %d  = %d",X,Y,sum);
    //printf("The sum is %d",sum);
}
