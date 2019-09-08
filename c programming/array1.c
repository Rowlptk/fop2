#include<stdio.h>

void main()
{
    int x[5],i;

    for(i=0;i<=4;i++)
    {
        printf("Enter value %d: ",(i+1));
        scanf("%d",&x[i]);
    }
    for(i=0;i<=4;i++)
    {

        printf("x[%d] = %d is on address = %X\n",i,x[i],&x[i]);
    }
}

/*
1 2 4 6 8 9 3

The odd Numbers are:
1
9
3

The Even Numbers are:
2
4
6
8
*/







