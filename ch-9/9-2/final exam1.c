#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int a;
	p("enter year: ");
	s("%d",&a);
	if(a%4==0)
	{
		p("%d is this is leap year",a);
	}
	else
	{
		p("%d this is not a leap year",a);
	}
}
