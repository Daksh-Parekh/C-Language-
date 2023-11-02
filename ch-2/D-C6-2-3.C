#include<stdio.h>
#include<conio.h>
main()
{
	float b,h,a;
	clrscr();
	printf("Value of b=");
	scanf("%f",&b);
	printf("Value of h=");
	scanf("%f",&h);

	a=(b*h)/2;
	printf("Area of triangle=%.2f",a);

	getch();


}
