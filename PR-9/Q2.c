#include<stdio.h>

struct student
{
	int roll_no,chem_marks,maths_marks,phy_marks;
	char name[20];
};

void main()
{
	struct student s1[10];
	int i;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter details of student: %d\n",i);
		printf("Roll no => ");
		scanf("%d",&s1[i].roll_no);
		printf("Name => ");
		scanf("%s",&s1[i].name);
		printf("Chemistry => ");
		scanf("%d",&s1[i].chem_marks);
		printf("Mathematics => ");
		scanf("%d",&s1[i].maths_marks);
		printf("Physics => ");
		scanf("%d",&s1[i].phy_marks);
		printf("\n\n");
	}
	
	
	int total;
	float per;
	
	for(i=1;i<=5;i++)
	{
		printf("Roll No: %d\n",s1[i].roll_no);
		printf("Name: %s\n",s1[i].name);
		printf("Chemistry: %d\n",s1[i].chem_marks);
		printf("Mathematics: %d\n",s1[i].maths_marks);
		printf("Physics: %d\n",s1[i].phy_marks);
		
		total = s1[i].chem_marks+s1[i].maths_marks+s1[i].phy_marks;
		printf("Total: %d/300\n",total);
		
		per = total/3;
		printf("Percent: %.2f\n",per);
		printf("\n\n");
	}
}
