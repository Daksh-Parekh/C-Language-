#include<stdio.h>

main()
{
	int n,n1;
	
	printf("Enter array A's size:");
	scanf("%d",&n);
	
	int a[n],i;
	

	printf("Enter a's value:\n",i+1);
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter array b's size:");
	scanf("%d",&n1);
	int b[n1],c[n+n1];
	printf("Enter b's value:\n",i+1);
	for(i=0;i<n1;i++)
	{
		printf("b[%d]:",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<n1;i++)
	{
		c[i+n]=b[i];
	}
	
	for(i=0; i<n+n1;i++)
		printf("c[%d]= %d\n",i,c[i]);
}

