#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();

	printf("Enter a first number:");
	scanf("%d",&a);
	printf("Enter a second number:");
	scanf("%d",&b);

	if(a<b)
	{
		printf("The minimum number is :%d",a);
	}
	else
	{
		printf("The minimum number is :%d",b);
	}

	getch();
}