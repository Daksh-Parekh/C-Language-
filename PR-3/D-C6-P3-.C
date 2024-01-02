#include<stdio.h>
#include<conio.h>
main()
{
	int i='a';
	clrscr();

	do
	{
		printf("%c ",i);
		i=i+4;
	}
	while(i<='z');
	getch();
}
