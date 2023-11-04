#include<stdio.h>
#include<conio.h>
main()
{
	float sal,hra,da,ta,a;
	clrscr();

	printf("Enter the base salary:");
	scanf("%f",&sal);

	hra=sal*0.10;
	printf("HRA=%.2f\n",hra);

	da=sal*0.05;
	printf("DA=%.2f\n",da);

	ta=sal*0.08;
	printf("TA=%.2f\n",ta);

	a=sal+hra+da+ta;
	printf("gross salary:%.2f",a);


	getch();

}