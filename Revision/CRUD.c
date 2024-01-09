#include<stdio.h>
#include "F:\7284_Daksh\ch-10\10_2\my_getfunction.c"

void main()
{
	int n;
	printf("Enter size:");
	scanf("%d",&n);
	
	int i,a[n],choice,index,val;
	arrayInput(a,n);
	
	do
	{
		printf("Press 1 for insert\n");
		printf("Press 2 for update\n");
		printf("Press 3 for delete\n");
		printf("Press 4 for display\n");
		printf("Press 5 for exit\n");
		
		printf("Enter choice:");
		scanf("%d",&choice);
		
		
		switch(choice)
		{
			case 1:
				printf("Enter index:");
				scanf("%d",&index);
				printf("Enter value:");
				scanf("%d",&val);
				
				for(i=n-1;i>=index;i--)
				{
					a[i+1]=a[i];
				}
				a[index]=val;
				n++;
			
			case 4:
				for(i=0;i<n;i++)
				{
					printf("a[%d]: %d\n",i,a[i]);
				}	
		}
		
		
	}while(n != 5);
}
