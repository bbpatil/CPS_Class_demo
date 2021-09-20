//Category  4: Functions with no arguments but return a value.
#include <stdio.h>
int add();
void main()
{
    int z;   
    z=add();
    printf("\nSum is:%d", z);
}

int add() 
//function with arguments
{
    int a,b,sum;
    printf("\nEnter two number:"); 
    scanf("%d%d",&a,&b);
    sum=a+b;
    return(sum);
}