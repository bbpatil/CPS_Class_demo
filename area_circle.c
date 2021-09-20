//To find the area of circle
#include<stdio.h>   //header file or preprocessor directives
#define pi 3.142    //global decleration
void main()         //main function
{                   // open parantesis
    float r,area=0;         //decleration   
    printf("enter radius"); //Message to user
    scanf("%f",&r);          // read value of radius
    area=pi*r*r;
    printf("The area of circle=%f",area);
}