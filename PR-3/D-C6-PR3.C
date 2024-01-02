#include<stdio.h>
#include<conio.h>
main()
{
	int id,fd,n;
	clrscr();

	printf("Enter any number:");
	scanf("%d",&n);

	id=n%10;

	while(n>9)
	{
		n=n/10;
	}
	fd=n;
	printf("Sum of last and first digit number:%d",fd+ld);

	getch();
}