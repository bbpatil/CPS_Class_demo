//Category  3: Functions with arguments and one return values
#include <stdio.h>
int add(int, int);
void main()
{
    int a,b,z;
    printf("\nEnter two number:"); 
    scanf("%d%d",&a,&b);
    z=add(a,b);
    printf("\nSum is:%d",z);
}

int add(int x, int y) 
//function with arguments
{
    int sum;
    sum=x+y;
    return(sum);
}
