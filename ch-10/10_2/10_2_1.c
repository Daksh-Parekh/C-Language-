#include<stdio.h>
#include "my_getfunction.c"

void main()
{
	float sum=getgrade();
	
	printf("\n\nPercentage: %.2f\n",sum);
	
	if(sum>=90)
	{
		printf("\nYou got A grade\n");
	}
	else if(sum>80 && sum<=90)
	{
		printf("\nYou got B grade\n");
	}
	else if(sum>70 && sum<=80)
	{
		printf("\nYou got c grade\n");
	}
	else if(sum>60 && sum<=70)
	{
		printf("\nYou got D grade\n");
	}
	else if(sum>50 && sum<=60)
	{
		printf("\nYou got E grade\n");
	}
	else if(sum>40 && sum<=50)
	{
		printf("\nYou got F grade\n");
	}
	else if(sum>33 && sum<=40)
	{
		printf("\nYou got G grade\n");
	}
	else
	{
		printf("You are fail ");
	}
}
