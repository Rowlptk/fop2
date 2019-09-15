/*structure ==> is a collection of different
types of variable

library:
    name ==> string
    pages ==> int
    price ==> float
    rack ==> char

    b1,b2,b3
*/

#include<stdio.h>

struct lib
{
    char name[50];
    int pages;
    float price;
    char rack;
}b[3];

void main()
{
    FILE *fp;
    fp = fopen("Library.txt","a");
    int i;
    for(i=0;i<=2;i++)
    {
        printf("Enter Book %d name: ",(i+1));
        gets(b[i].name);
        printf("Enter Book %d pages: ",(i+1));
        scanf("%d",&b[i].pages);
        printf("Enter Book %d price: ",(i+1));
        scanf("%f",&b[i].price);
        printf("Enter Book %d Rack: ",(i+1));
        scanf(" %c",&b[i].rack);
        getchar();
        printf("\n");
    }

        fprintf(fp,"******* Library **********\n\n");

    for(i=0;i<=2;i++)
    {
        fprintf(fp,"******* Book %d **********\n",i+1);
        fprintf(fp,"Name: %s\nPages: %d\nPrice: %.2f\nRack: %c\n",b[i].name,b[i].pages,b[i].price,b[i].rack);
        fprintf(fp,"************************** \n\n");
    }
    fclose(fp);
}









