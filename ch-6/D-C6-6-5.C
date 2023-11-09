#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,min;
	clrscr();

	printf("Enter a value of the first number:");
	scanf("%d",&a);
	printf("Enter a value of the second number:");
	scanf("%d",&b);
	printf("Enter a value of the third number:");
	scanf("%d",&c);

	min=(a<b)
		? (a<c)
			?a
			:c
		: (b<c)
			?b
			:c;
	printf("The minimum value:%d",min);


	getch();
}