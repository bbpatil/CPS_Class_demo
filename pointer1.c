#include <stdio.h>
void main()
{
int i=9;    //normal(data) variable decleration
int *ptr;   //pointer variable decleration
ptr=&i;     //Intializing or assigning the pointer varible to normal(data) variable
printf("Value of i : %d\n",i);
printf("Address of i %d\n", &i);
printf("Value at address of i: %d\n", *(&i));
printf("Value at address of i: %d\n", *ptr);
}
