#include<stdio.h>

struct Employee
{
	int id;
	char name[20];
	int age;
	char role[20];
	char city[30];
	int experience;
	char co_name[50];
}s1;

void main()
{
	int n,i;
	
	printf("Enter number of employees: ");
	scanf("%d",&n);
	
	printf("\t\tFILL DETAILS OF STUDNTS...\n\n");
	for(i=1;i<=n;i++)
	{
	printf("Enter student id: ");
	scanf("%d",&s1.id);
	printf("Enter student name: ");
	scanf("%s",&s1.name);
	printf("Enter student age: ");
	scanf("%d",&s1.age);
	printf("Enter student course: ");
	scanf("%s",&s1.course);
	printf("Enter student city: ");
	scanf("%s",&s1.city);	
	printf("Enter student std: ");
	scanf("%d",&s1.std);
	printf("Enter student school: ");
	scanf("%s",&s1.school);
	
	printf("\n");
	}
	
	printf("\t\tDETAILS of students\n\n");
	for(i=1;i<=n;i++)
	{
	printf("Student ID: %d \n",s1.id);
	printf("Student NAME: %s \n",s1.name);
	printf("Student AGE: %d\n",s1.age);
	printf("Student COURSE: %s\n",s1.course);
	printf("Student CITY: %s\n",s1.city);
	printf("Student STD: %d\n",s1.std);
	printf("Student SCHOOL: %s\n",s1.school);
	
	printf("\n");
	}

}
