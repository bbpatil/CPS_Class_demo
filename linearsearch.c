//Linear Search of N elements
#include<stdio.h>
void main()
{
    int a[50],n,i,key,flag=0;
    printf("Enter the number of element");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key value");
    scanf("%d",&key);
    for(i=1;i<=n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=1;i<=n;i++)
    { 
        if(key==a[i])
        {    flag=1;
            break;
        }    
        else 
        {
            flag=0;
        }    
    }
    if(flag==1)
        printf("Key element found");
        else
        printf("Key not found");
}