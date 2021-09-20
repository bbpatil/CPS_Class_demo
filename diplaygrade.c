//Switch example
#include<stdio.h>
void main()
{
    char a;
    printf("enter the choice");
    scanf("%c",&a);
    switch (a)
    {
    case 'D': printf("FCD");
            break;
    case 'F': printf("FC");
            break;
    case 'S':
    case 's':printf("SC");
            break;
    default: printf("Fail");
            break;
    }
}