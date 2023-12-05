#include<stdio.h>

main()
{
	int n;
	
	printf("Enter size of array:");
	scanf("%d",&n);
	
	int a[n],i;
	
	for(i=0;i<n;i++)
	{
		printf("%d) Enter value:",i+1);
		scanf("%d",&a[1]);
	}
	printf("Length of an array :%d",n);
}

