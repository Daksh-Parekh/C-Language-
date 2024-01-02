#include<stdio.h>

main()
{
	int i,j,k=11,n;
	
	printf("Enter size :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",k++);
		}
		printf("\n");
	}
}
