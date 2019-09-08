/*function ==> is a block of code

function declaration

function definition

function call
*/

#include<stdio.h>

// parameterless function
void add(); // function declaration

// parameterized function
int addd(int a,int b);

void main()
{
int result;
   add();//function call
   printf("The value is %d\n",addd(6,7));
   result = addd(89,96);
   printf("The value of result is %d\n",result);
}

int addd(int a, int b)
{
    return a+b;
}

// function definition
void add()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("%d + %d = %d",a,b,(a+b));
}







