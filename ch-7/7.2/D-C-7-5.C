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
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}

	getch();
}