/*Program 11: Develop a program to sort the given set of N numbers using Bubble sort*/
#include<stdio.h>   
void main()
{
	int a[100],i,j,temp,n;
	printf("Enter the number of elements:\n");
	scanf("%d", &n);
	printf("Enter %d elements into array:\n", n);
	for(i=0;i<n; i++)
	{
	  scanf("%d", &a[i]);
	}
	printf("The unsorted array is:\n");
	for(i=0;i<n; i++)
	{
		printf("%d\t", a[i]);
	}
	for(i=1;i<n; i++)
	{
		for(j=0;j<n-i; j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n The sorted array is:\n");
	for(i=0;i<n; i++)
	{
        printf("%d\t", a[i]);
    }
}