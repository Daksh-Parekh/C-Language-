#include<stdio.h>
#include<conio.h>
main()
{
	int a,count=0;
	clrscr();

	printf("Enter any number:");
	scanf("%d",&a);

	while(a!=0)
	{
		a=a/10;
		count++;
	}
	printf("Number of digit :%d",count);

	getch();

}
