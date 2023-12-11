#include<stdio.h>
#include<conio.h>
#define C clrscr
#define S scanf
#define P printf
#define G getch
main()
{
	  int a,b;
	  
	  P("enter a:");
	  S("%d",&a);
	  P("enter b:");
	  S("%d",&b);
	  
	
	  P("a: %d\nb: %d\n",a,b);
	  
	  P("\naddition\t: %d",a+b);
	  
	  P("\nsubstraction\t: %d",a-b);
	  
	  P("\nmultiplication\t: %d",a*b);
	  
	  P("\ndivision\t: %d",a/b);




}
