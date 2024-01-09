#include<stdio.h>

void main()
{
	int n,a[n],i;
	
	printf("Enter array size: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	

	printf("Press 1 for insert\n");
	scanf("%d",&n);

	
	
	switch(n)
	{
		case 1:
			printf("ok");
			
	}

		
}
