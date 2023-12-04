#include<stdio.h>

main()
{
	int n;
	
	printf("Enter array size:");
	scanf("%d",&n);
	
	int a[n],b[n],c[n],i;
	
	for(i=0;i<n;i++)
	{
		printf("%d) Enter a's value:",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d) Enter b's value:",i+1);
		scanf("%d",&b[i]);	
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
		printf("%d)Array c is:%d\n",i+1,c[i]);
	}		 
}

