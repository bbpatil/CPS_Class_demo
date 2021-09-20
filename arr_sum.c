#include <stdio.h>
void main()
{     
	int marks[10], i, n, sum = 0;     
	printf("Enter n: ");     
	scanf("%d", &n);  
	printf("Enter %d numbers \n",n);   
	for(i=0; i<n; i++)     
	{          
		scanf("%d", &marks[i]);         
 		sum += marks[i];     
	}     
	printf("Sum= %d", sum);     
}