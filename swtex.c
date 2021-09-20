//Switch example
#include<stdio.h>
void main()
{
    int a;
    printf("enter the choice");
    scanf("%d",&a);
    switch (a)
    {
    case 1: printf("Monday");
            break;
    case 2: printf("Tuesday");
            break;
    case 3: printf("Wed");
            break;
    default: printf("Holiday");
            break;
    }
}