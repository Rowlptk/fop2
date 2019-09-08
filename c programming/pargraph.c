/* This is a house.
It was built in 1921.
It costs around 20 million dollar right now.

char para[500];

terminating character : !

*/

#include<stdio.h>
void main(){
    char para[500], ch = ' ', t;
    int i, count = 0,j;
    //printf("Enter a terminating Character : ");
    //t = getchar();
    i = 0;
    while(count<5)
    {
        ch = getchar();
        if(ch == '\n')
        {
            count++;
        }
        para[i] = ch;
        i++;
    }

    for(j=0;j<i;j++)
    {
        printf("%c",para[j]);
    }



}










