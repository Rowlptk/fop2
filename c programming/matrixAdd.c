/*
|2 3|   +   |2 0|  =  |4   3|
|4 5|       |6 9|     |10 14|
*/

#include<stdio.h>
void main()
{
    int m1[2][2], m2[2][2], res[2][2];
    int i,j;
    printf("Enter First Matrix: \n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("m1[%d][%d] = ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }
    printf("\nEnter Second Matrix: \n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("m2[%d][%d] = ",i,j);
            scanf("%d",&m2[i][j]);
        }
    }

    printf("\nAddition Result Matrix: \n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            res[i][j] = m1[i][j] + m2[i][j];
            printf("%d\t",res[i][j]);
        }
        printf("\n");
    }


}






