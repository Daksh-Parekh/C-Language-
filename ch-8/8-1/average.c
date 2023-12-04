#include<stdio.h>

main()
{
	int n;
	float avg=0;
	
	printf("Enter size of array:");
	scanf("%d",&n);
	
	int a[n],i;
	
	for(i=0;i<n;i++)
	{
		printf("%d) Enter value:",i+1);
		scanf("%d",&a[i]);
		avg+=a[i];
	}
	 
	avg=avg/n;
	printf("average of an array :%.2f\n",avg);

}

