#include<stdio.h>
#include<conio.h>
#define P printf

main()
{
	int a,b,c;
	clrscr();
	printf("Enter a,b &c:");
	scanf("%d%d%d",&a,&b,&c);

	if(a<b)
	{
		if(a<c)
		{
			P("A is small");
		}
		else
		{
			P("C is small");
		}
	}
	else
	{
		if(b<c)
		{
			P("B is small");
		}
		else
		{
			P("C is small");
		}
	}
	getch();
}