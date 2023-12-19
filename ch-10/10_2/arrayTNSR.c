#include<stdio.h>
#include "my_getfunction.c"

void main()
{
	int n;
	
	printf("Enter length: ");
	n=getInt();
	
	int a[n];
	
	arrayInput(a,n);
	arrayOutput(a,n);
	
}
