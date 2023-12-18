#include<stdio.h>

main()
{
	int n,i,n1,s1,j;
	
	printf("Enter numbers of the name: ");
	scanf("%d",&n);

	printf("Enter number of subjects: ");
	scanf("%d",&n1);
	
	char names[n][30],sub[n1][30];
	
	for(i=0;i<n;i++)
	{
		printf("%d) Enter names:",i+1);
		scanf("%s",names[i]);
	
		for(j=0;j<n;j++)
		{
			for(s1=0;s1<n1;s1++)
			{	
				printf("%d) Enter subjects of sudents %d: ",s1+1,j+1);
				scanf("%s",sub[s1]);
			}
			printf("\n");
		}
	}	

	
	
/*	printf("Enter number of subjects: ");
	scanf("%d",&n1);
	
	
	for(i=0;i<n;i++)
	{
		for(s1=0;s1<n1;s1++)
		{
			printf("%d) Enter subjects of sudents %d: ",s1+1,i+1);
			scanf("%s",sub[s1]);
		}
		printf("\n");
	}*/
	
}
