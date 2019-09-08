/*Banking System:

1. Balance Check
2. Withdrawal
3. Deposit
4. Exit

Username, Password; ==> login, menu
Withdraw: 25000; ==> multiple 500
Deposit ==> 50000

login

menu

kehi message
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void login();
void menu();
int choose();
void select(int n);
void check_balance();
void withdrawal();
void deposit();
void proceed();

int I = 1000;

void main()
{
    login();
}

void proceed()
{
    char ch;
    printf("\nPress Y to continue... ");
    scanf(" %c",&ch);
    if(ch=='Y'||ch=='y')
    {
        menu();
    }
    else
    {
        system("cls");
        printf("\nYou have been logged out! \n");
    }

}



void deposit()
{
    int da;
    system("cls");
    printf("Enter Amount to Deposit : ");
    scanf("%d",&da);
    system("cls");
    if(da<=50000)
    {
        I = I + da;
        printf("\nThe Deposit amount = %d\n",da);
        printf("\nCurrent Balance  = %d\n",I);
    }
    else
    {
        printf("\nDaily limit Exceeds 50000\n");
    }
    proceed();
}

void withdrawal()
{
    int wa;
    system("cls");
    printf("Enter Amount to withdraw: ");
    scanf("%d",&wa);
    system("cls");
    if(wa<=I)
    {
        if(wa<=25000)
        {
            if(wa%500==0)
            {
                I = I - wa;
                printf("\nAmount Withdrawan = %d\n",wa);
                printf("\nCurrent Balance = %d\n",I);
            }
            else
            {
                printf("\nWithdraw Amount must be multiple of 500\n");
            }
        }
        else
        {
            printf("\nDaily Limit exceeds, WA must be less than 25000\n");
        }
    }
    else
    {
        printf("\nWithdraw Amount exceeds current Balance\n");
    }


    proceed();


    /*if(wa<=25000 && wa%500==0 && wa<=I)
    {
        I = I-wa;
        printf("\nAmount withdrawan is %d\n",wa);
        printf("\nTotal Balance Now is %d\n",I);
    }
    else
    {
        printf("\nWithdraw Amount must be multiple of 500 and less than 25000");
    }
    */
}

void check_balance()
{
    system("cls");
    printf("\nYour Balance is %d\n",I);
    proceed();
}

void select(int n)
{
    switch(n)
    {
    case 1:
        check_balance();
        break;
    case 2:
        withdrawal();
        break;
    case 3:
        deposit();
        break;
    case 4:
        exit(0);

    default:
        system("cls");
        printf("\nInvalid Option!\n");
        proceed();

    }
}

int choose()
{
    int n;
    printf("\nChoose : ");
    scanf("%d",&n);
    return n;
}


void menu()
{
    int num;
    system("cls");
    printf("******Welcome to Mero Banking System******\n");
    printf("Menu: \n");
    printf("1. Check Balance\n");
    printf("2. Withdrawal\n");
    printf("3. Deposit\n");
    printf("4. Exit\n");
    num = choose();
    select(num);
}

void login()
{
    char usr[20] = "admin";
    char pin[20] = "1234";
    char usrIn[20],pinIn[20];
    printf("Enter Username: ");
    gets(usrIn);
    printf("Enter Password: ");
    gets(pinIn);
    if((strcmp(usr,usrIn)==0) && (strcmp(pin,pinIn)==0))
    {
        menu();
    }
    else
    {
        printf("username or password is incorrect");
    }

}













