#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,s,n;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(s=1;s<i;s++)
		{
			printf("  ");
		}
		for(j=n;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}

	getch();
}