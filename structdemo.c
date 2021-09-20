#include<stdio.h>
#include<string.h>
struct personal 
{ 
    char name[20]; 
    int day; 
    char month[10];
    int year; 
    float salary; 
}; 
void main() 
{ 
struct personal person; 
printf("Input values\n"); 
scanf("%s %d %s %d %f", person.name, &person.day,person.month, &person.year, &person.salary); 
printf("Entered values are\n");
printf("Name: %s\n Day:%d\t Month:%s\t Year:%d\n Salary:Rs.%.2fpm\n",person.name, person.day, person.month, person.year, person.salary); 
} 
