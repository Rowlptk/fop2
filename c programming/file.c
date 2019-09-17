/*File ==> is a collection of data or records or
information

text file ==> plain text file
binary file ==> binary encoded ==> secure
            ==> only specific application
             le read garna sakxa


File Operation:

    1. Create / Open
    2. Read / Write
    3. Close

    */

#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
/*  fp = fopen("demo.txt","a");
    printf("Enter any string: ");
    while(ch!='`')
    {
        ch = getchar();
        fputc(ch,fp);
    }
    fclose(fp);
*/
    fp = fopen("file.c","r");
    if(fp==NULL)
    {
        printf("File Not Found! ");
    }
    else
    {
       printf("File Contents are: \n");
       while(!feof(fp))
       {
          ch = fgetc(fp);
          putchar(ch);
       }
    }
    fclose(fp);






    //fprintf(fp,"Hello Everyone! ");
    //fprintf(fp,"This is a house");
    //fprintf(fp,"\nHello");

}
