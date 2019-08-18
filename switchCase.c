#include<stdio.h>

// s, m, t, w, h, f, a

void main()
{
    char ch;
    printf("Enter a day character: s, m, t, w, h(thus), f, a(sat) :");
    scanf(" %c",&ch);
    switch(ch)
    {
    case 's':
        printf("Sunday");
        break;
    case 'm':
        printf("Monday");
        break;
    case 't':
        printf("Tuesday");
        break;
    case 'w':
        printf("Wednesday");
        break;
    case 'h':
        printf("Thursday");
        break;
    case 'f':
        printf("Friday");
        break;
    case 'a':
        printf("Saturday");
        break;
    default:
        printf("Invalid Character");
    }
}
