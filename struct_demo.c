#include<stdio.h>
#include<string.h>
struct student
{
	int rollno,marks;
	char name[20],grade;
};

void main()
{
int i,n;
struct student s[10];

printf("Enter number of students\n"); //5
scanf("%d", &n);
printf("Enter %d student details\n", n);
for(i=0;i<n;i++)
{
		printf("Eneter details of student %d\n",i+1);
		printf("Enter the roll number\n");
		scanf("%d", &s[i].rollno);
		printf("Enter the name\n");
		scanf("%s", s[i].name);
		printf("Enter the marks\n");
		scanf("%d", &s[i].marks);
		printf("Enter the grade\n");
		fflush(stdin);
		scanf("%c", &s[i].grade);
}
printf("Student details are\n");
printf("Roll No\tName\tMarks\tGrade\n");
for(i=0;i<n;i++)
{
		printf("%d\t%s\t%d\t%c\n", s[i].rollno, s[i].name, s[i].marks, s[i].grade);
}	
}
