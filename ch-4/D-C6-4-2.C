#include<stdio.h>
#include<conio.h>
main()
{
	float c,f;
	clrscr();

	printf("Enter celsius: ");
	scanf("%f",&c);

	f=c*9/5 + 32;
	printf("Enter fahrenheit:%.2f ",f);


	getch();
}