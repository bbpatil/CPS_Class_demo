//Switch example
#include<stdio.h>
void main()
{
    char a;
    printf("enter the choice");
    scanf("%c",&a);
    switch (a)
    {
    case 'm': printf("Monday");
            break;
    case 't': printf("Tuesday");
            break;
    case 'w': printf("Wed");
            break;
    default: printf("Holiday");
            break;
    }
}