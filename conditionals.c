#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("num is Positive");
    }
    else if(num<0)
    {
        printf("num is negative");
    }
    else
    {
        printf("num is Zero");
    }
    return 0;
}
