#include<stdio.h>
#include<conio.h>
#define PI 3.14
main()
{
	float r,area;
	clrscr();
	printf("Value of pi =%.2f\n",PI);
	printf("Value of r =");
	scanf("%f",&r);

	area=PI*r*r;
	printf("Area of circle =%.2f",area);

	getch();
}
