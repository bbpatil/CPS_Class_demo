#include<stdio.h>
void main()
{
    int id[2000],n,i;
    printf("enter the number of student");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&id[i]);
        printf("The id of %d",id[i]);
    }  
}