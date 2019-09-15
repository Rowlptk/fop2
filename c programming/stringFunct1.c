#include<stdio.h>
#include<string.h>

void main()
{
    char s1[100],s2[100];
    int res;
    printf("Enter String 1: \n");
    gets(s1);
    printf("\n");
    printf("Enter String 2: \n");
    gets(s2);
    printf("\n");
    //puts(strcat(s1,s2));
    //puts(s1);
    //puts(s2);

    //strcpy(s1,s2);
    //puts(s1);
    //puts(s2);

    res = strcmp(s1,s2);
    //printf("%d",res);
    if(res==0)
    {
        printf("Both Are Equal");
    }
    else if(res>0)
    {
        printf("S1 is thulo");
    }
    else{
        printf("S2 is thulo");

    }


}

/*
strcmp(s1,s2);
s1> ==> +ve
s2> ==> -ve
s1==s2 ==> 0
*/
