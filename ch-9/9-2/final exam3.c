#include<stdio.h>
main()
{
	

	int n,rem,rev=0,count=0;
	
	printf("enter any number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=n*10+rem;
		n=n/10;
		count++;
	}

	printf("total number of digit: %d",count);



		
	
	
}
