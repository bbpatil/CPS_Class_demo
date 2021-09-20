//To desgin simple calculator-switch
#include<stdio.h>
void main()
{
    int a,b,res=0;
    char op;
    printf("Enter the values of a & b");
    scanf("%d%d",&a,&b);
    printf("Enter the operator");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':res=a+b;
                break;
        case '-':res=a-b;
                break;
        case '*':res=a*b;
                break;
        default:printf("Enter valid operator");
                exit(0);
    }
    printf("The result=%d",res);
}