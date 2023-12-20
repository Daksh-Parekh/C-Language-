#include<stdio.h>

//Factorial
int  nfacto(int n)
{
	if(n>1)
	{
		return n * nfacto(n-1);
	}
	else
	{
		return 1;
	}
}


void main()
{
	int facto=nfacto(5);

	printf("Factorial: %d",facto);

}
