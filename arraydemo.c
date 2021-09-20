#include<stdio.h>
void main()
{
    int i;
    int arr[5] = {2, 3, 4};	// Compile time array initialization
    arr[4]=6;
    for(i = 0 ; i < 5 ; i++) 
    {
        printf("%d\t",arr[i]);
    }
}