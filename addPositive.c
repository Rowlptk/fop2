#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter First Number: ");
    scanf("%d",&x);
    while(x<0)
    {
        printf("Please Enter positive value only: ");
        scanf("%d",&x);
    }
    printf("\n");

    printf("Enter Second Number: ");
    scanf("%d",&y);
    while(y<0)
    {
        printf("Please Enter positive value only: ");
        scanf("%d",&y);
    }
    printf("\n");

    printf("The Addition result is %d\n",(x+y));

}
