#include <stdio.h>
void main()
{
    int i = 1,n,sum=0;		  	    // Initialization 
    printf("Enter the value of n");
    scanf("%d",&n); 
    do
    {
	    printf("%d\t", i);
        sum=sum+ i;
	    i++;			    // Incrementing
    }while(i <= n);		// Testing
    printf("Sum=%d",sum);
}