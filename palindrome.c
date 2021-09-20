//To check a number is palindrome or not
#include<stdio.h> 
void main()
{
	int NUM,reverse=0,temp,remainder; 
	printf("Enter a number\n"); 
	scanf("%d",&NUM);
	temp=NUM;
	while(temp!=0)
	{
		remainder=temp%10; 
		temp=temp/10; 
		reverse=reverse*10+remainder;
	}
	printf("Reverse of %d is %d \n",NUM,reverse); 
	if(NUM==reverse)
		printf("%d is a palindrome number \n", NUM); 		
	else
		printf("%d is not a palindrome number \n", NUM);
}