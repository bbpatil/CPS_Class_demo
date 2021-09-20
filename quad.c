/*Develop a program to compute the roots of a quadratic equation by accepting the coefficients. Print appropriate messages.*/
#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c;
	float root1,root2;
	float d,real,imag;
	printf("Enter the Co-efficient a,b,c(no-zero)\n"); 
	scanf("%f%f%f",&a,&b,&c);
	d=(b*b)-(4*a*c);
	if(d==0)
	{
		printf("ROOTS ARE REAL AND EQUAL\n");
		root1=root2=-b/(2*a); 
		printf("Root1=%f\n Root2=%f\n",root1,root2);
	}
	else if(d>0)
	{
		printf("ROOTS ARE REAL AND DISTINCT\n");
		root1=(-b+(sqrt(fabs(d))))/(2*a);
		root2=(-b-(sqrt(fabs(d))))/(2*a); 		
		printf("ROOT1=%f\n ROOT2=%f\n",root1,root2);
	}
	else if(d<0)
	{
		printf("ROOTS ARE IMAGINARY\n");
		real=-b/(2*a); 
		imag=sqrt(fabs(d))/(2*a); 
		printf("ROOT1=%f+i%f\n",real,imag); 
		printf("ROOT2=%f-i%f\n",real,imag);
	}
}