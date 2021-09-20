#include<stdio.h>
int sum(int a,int b);
//void sub(a,b);
//void mult(a,b);
void main()
{
    int a,b,z,res=0;
    printf("Enter the values of a & b");
    scanf("%d%d",&a,&b);
    z=sum(a,b);
    //sub(a,b);
    //mult(a,b);
    printf("returned value form sum is %d",z);
}
int sum(int a,int b)
{
   int c;
   c=a+b;
   printf("Sum=%d",c);
   return c; 
}
