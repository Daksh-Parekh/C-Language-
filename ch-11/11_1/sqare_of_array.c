#include<stdio.h>

main()
{
	int n,i;
	
	printf("Enter the array's size :");
	scanf("%d",&n);
	
	int a[n];
	int *ptr[n];
	
	printf("Enter array's elements:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		ptr[i] = &a[i];
	}
	
	printf("Sqare of each element:");
	for(i=0;i<n;i++)
	{
		printf("%d ",(*ptr[i])*(*ptr[i]));
	}
}
