#include<stdio.h>
void main()
{
    int x[10],i;
    for(i=0;i<=9;i++)
    {
        printf("Enter value %d: ",(i+1));
        scanf("%d",&x[i]);
    }

    printf("\nEven Numbers are: ");
    for(i=0;i<=9;i++)
    {
        if(x[i]%2==0)
        {
            printf("\n%d",x[i]);
        }
    }

    printf("\n\nOdd Numbers are: ");
    for(i=0;i<=9;i++)
    {
        if(x[i]%2!=0)
        {
            printf("\n%d",x[i]);
        }
    }
}


