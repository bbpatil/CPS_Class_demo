//Arrays of Structures
#include <stdio.h> 
#include <string.h> 
struct student 
{ 
    int id; 
    char name[30]; 
    float percentage; 
}; 
void main() 
{ 
int i; 
struct student record[2]={{12,"ABC",75},{13,"XYZ",80}};
for(i=0; i<3; i++) 
{ 
printf(" Records of STUDENT : %d \n", i+1); 
printf(" Id is: %d \n", record[i].id); 
printf(" Name is: %s \n", record[i].name); 
printf("Percentage is %f\n",record[i].percentage); 
} 
}