#include<stdio.h>
#include<conio.h>
#define PI 3.14
main()
{
	float r,per;
	clrscr();
	printf("Value of pi =%.2f\n",PI);
	printf("Value of r =");
	scanf("%f",&r);

	per=2*PI*r;
	printf("Perimeter of the circle =%.2f",per);

	getch();
}
