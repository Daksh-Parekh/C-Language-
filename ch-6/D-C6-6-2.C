#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	clrscr();

	printf("Enter a number:");
	scanf("%d",&a);

	if(a > 0)
	{
		printf("The number is positive");
	}
	else if(a == 0)
	{
		printf("The number is neutral");
	}
	else
	{
		printf("The number is negative");
	}
	getch();

}

