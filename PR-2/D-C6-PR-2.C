#include<stdio.h>
#include<conio.h>
main()
{
	float unit,bill=0;
	clrscr();
	printf("Enter electricity units:");
	scanf("%f",&unit);

	if(unit <= 50)
	{
		bill=unit * 0.5;
	}
	else if(unit >=51 && unit<=150)
	{
		bill=((unit-50)*0.75) +25;
	}
	else if(unit >=151 && unit<=250)
	{
		bill=((unit-150)*1.20) +100;
	}
	else
	{
		bill=((unit-250)*1.5) +220;
	}
	bill+=(bill*0.2);
	printf("bill: %.2f",bill);

	getch();
}