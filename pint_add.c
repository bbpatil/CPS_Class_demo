#include<stdio.h>
void main()
{
    int a=10,b=5,sum=0;
    int *pa,*pb;
    pa=&a;
    pb=&b;
    sum=*pa+*pb;   //sum=a+b;
    printf("Sum=%d",sum);
}