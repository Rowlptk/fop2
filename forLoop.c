#include<stdio.h>

void main()
{
    int n,i;
    printf("Kun wanza?");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d X %d = %d\n",n,i,(n*i));
    }
}
