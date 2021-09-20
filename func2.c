//Category  2: Functions with arguments and no return values.
#include <stdio.h>
void add(int, int);
void main()
{
    int a,b;
    printf("\n Enter two number:"); 
    scanf("%d %d", &a, &b);
    add(a,b);
}

void add(int x, int y) 
//function with arguments
{
    int z; z=x+y;
    printf("\nSum is:%d",z);
}
