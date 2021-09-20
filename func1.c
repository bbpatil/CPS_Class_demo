//Category  1: Functions with no arguments and no return values
#include <stdio.h> 
void add(void);
void main()
{
    add();
}
void add()
{
    int a,b,c;
    printf("\nEnter two number:"); 
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\nSum is:%d",c);
}