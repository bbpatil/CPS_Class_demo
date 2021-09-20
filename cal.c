//To desgin simple calculator- if and else
#include<stdio.h>
void main()
{
    int a,b,sum=0,sub=0;
    char op;
    printf("Enter the values of a & b");
    scanf("%d%d",&a,&b);
    printf("Enter the operator");
    scanf(" %c",&op);
    if(op=='+')
    {
        sum=a+b;
        printf("Sum=%d",sum);
    }    
    else 
    if(op=='-')
    {
        sub=a-b;
        printf("Sub=%d",sub);
    }
    else
    printf("Enter the valid operator");
}