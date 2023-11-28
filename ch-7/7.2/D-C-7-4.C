#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,s,n;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);

	for(i=n;i>=1;i--)
	{
		for(s=1;s<=n-i;s++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j%2);
		}
		printf("\n");
	}

	getch();
}