#include<stdio.h>

void cube(int row,int col,int *ptr[row][col])
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",(*ptr[i][j])*(*ptr[i][j])*(*ptr[i][j]));
		}
		printf("\n");
	}
}

void main()
{
	int row,col,i,j;
	
	printf("Enter number of rows: ");
	scanf("%d",&row);
	printf("Enter number of column: ");
	scanf("%d",&col);
	
	int a[row][col];
	int *ptr[row][col];
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	printf("\n");
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			ptr[i][j] = &a[i][j];
		}
	}
	cube (row,col,&ptr);
}
