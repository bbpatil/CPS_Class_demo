#include <stdio.h>
int fun(int x)
{
   x = 30;
   printf("%d\n",x);
   return x;
} 
int main(void)
{
    int z,x = 20;
    z=fun(x);
    printf("x = %d", z);
    return 0;
}
