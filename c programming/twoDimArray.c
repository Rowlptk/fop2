#include<stdio.h>
void main()
{
    int ary[3][3];
    int i,j;
    printf("Fill 3 x 3 Matrix: \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("ary[%d][%d] = ",i,j);
            scanf("%d",&ary[i][j]);
        }
    }

    printf("3 x 3 Matrix: \n");
    for(i=0;i<=2;i++)
    {
        printf("|  ");
        for(j=0;j<=2;j++)
        {
            printf("%d  ",ary[i][j]);
        }
        printf("|\n");
    }
}
