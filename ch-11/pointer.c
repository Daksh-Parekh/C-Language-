#include<stdio.h>

void main()
{
	int a,b,c;
	
	int *ptr;
	int *ptr2;
	int *sum;
	
	ptr = &a;
	ptr2 = &b;
	sum = &c;
	
	printf("Enter value: ");
	scanf("%d",ptr);
	
	printf("Enter value: ");
	scanf("%d",ptr2);
	
	
	*sum = *ptr+*ptr2;
	printf("Addition of pointer: %d",*sum);
}

