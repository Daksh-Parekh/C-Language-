#include<stdio.h>

void main()
{
	int n,i;
	printf("Enter length of array: ");
	scanf("%d",&n);
	
	int a[n];
	int *ptr;
	
	ptr = &a;
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",ptr+i);
	}
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]: %d\n",i,*(ptr+i));
	}
	
	int sum;
	sum=sum+*(ptr+i);
	
	printf("Sum: %d",sum);
	
}
