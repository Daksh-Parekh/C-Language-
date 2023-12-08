#include<stdio.h>

main()
{
	int r,c,sum=0;
	printf("Enter row:");
	scanf("%d",&r);
	printf("Enter column:");
	scanf("%d",&c);
	
	int a[r][c];
	
	int i,j;
	printf("\n\n\t-- 2D Array --\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n--Diagonal--\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				printf("%d ",a[i][j]);
				
				sum +=a[i][j];
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("Sum :%d",sum);
	
}
	
