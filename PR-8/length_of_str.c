#include<stdio.h>
#include<string.h>

void main()
{
	char str[20];
	int *ptr;
	ptr = &str;
	printf("Enter any string: ");
	gets(str);
	
	*ptr = strlen(str);
	printf("The length of a string: %d",*ptr);
}
