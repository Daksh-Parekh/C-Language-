#include<stdio.h>

main()
{
	int i,j,k,n;
	
	printf("Enter size :");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(k=i;k>1;k--)
		{
			printf("  ");	
		}
		for(j=i;j<=n;j++)
		{
			printf("* ");
		}
		for(j=n-1;j>=i;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=2;i<=n;i++)
	{
		for(k=2;k<=i;k++)
		{
			printf("  ");
		}
		for(j=i;j<=n;j++)
		{
			printf("* ");		
		}
		for(j=n-1;j>=i;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
}
