#include<stdio.h>
void main()
{
    int x[5] = {2,8,9,30,-5};
    printf("%d ",x[2]);
    x[2] = 45;
    printf("\n%d",x[2]);
    printf("\nEnter value of x[2]: ");
    scanf("%d",&x[2]);
    printf("The value is : %d",x[2]);
}
