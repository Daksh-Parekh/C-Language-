#include<stdio.h>
#include<conio.h>
#define P printf

main()
{
	int a,b,c,d;
	clrscr();
	P("Enter a,b,c &d:");
	scanf("%d%d%d%d",&a,&b,&c,&d);

	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				P("A is big");
			}
			else
			{
				P("D is big");
			}
		}
		else
		{
			if(c>d)
			{
				P("C is big");
			}
			else
			{
				P("D is big");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				P("B is big");
			}
			else
			{
				P("D is big");
			}
		}
		else
		{
			if(c>d)
			{
				P("C is big");
			}
			else
			{
				P("D is big");
			}
		}
	}
	getch();
}