#include<stdio.h>

void main()
{
    int a,b,c;
    float d;

    printf("Enter a,b,c(non-zero)");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d==0)
    {
        printf("Roots are real and equal");
        root1=;
        root2=;
    }
    else if(d>0)
    {
        printf("roots are real and distinct");
    }
    else
    {
        printf("Roots are complex");
    }
}