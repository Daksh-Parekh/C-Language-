#include<stdio.h>
#include "my_function.c"

void main()
{
	int a,b,n;
	
	
	
	do
	{
		printf("Press 1 for +\n");
	printf("Press 2 for -\n");
	printf("Press 3 for *\n");
	printf("Press 4 for /\n");
	printf("Press 5 for %\n");
	printf("Press 0 for exit\n");
	
	printf("Enter your choice:");
	scanf("%d",&n);
		
		switch(n)
		{
			case 0:
				printf("Exit");
				break;
			case 1:
				sum(a,b);
				break;
			case 2:
				sub(a,b);
				break;
			case 3:
				multi(a,b);
				break;
			case 4:
				Divi(a,b);
				break;
			case 5:
				modu(a,b);
				break;
			default:
				printf("Invalid Output");
		}
	}
	while(n!=0);
}
