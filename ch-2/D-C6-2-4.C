#include<stdio.h>
#include<conio.h>
main()
{
	float p,r,n,i;
	clrscr();
	printf("Principle amount =");
	scanf("%f",&p);
	printf("Value of rate of interest =");
	scanf("%f",&r);
	printf("Number of years =");
	scanf("%f",&n);

	i=(p*r*n)/100;
	printf("Interest =%f",i);

	getch();


}
