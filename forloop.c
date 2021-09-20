#include <stdio.h>
void main()
{
    int i,sum=0;		  	 // decleration 
    for(i=1;i<=5;i++)
    {
	    printf("%d\t", i);
        sum=sum+i;
	}		
    printf("Sum=%d",sum);	
}