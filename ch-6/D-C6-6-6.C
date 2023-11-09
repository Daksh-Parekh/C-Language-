#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	clrscr();
	printf("Press 1 for english\n");
	printf("Press 2 for hindi\n");
	printf("Press 3 for gujrati\n");
	printf("Enter your choice:");
	scanf("%d",&a);

	switch(a)
	{
		case 1:
			printf("Press 1 for Internet Recharge\n");
			printf("Press 2 for Top-up Recharge\n");
			printf("Press 3 Special Recharge\n");
			printf("Enter your choice:");
			scanf("%d",&b);
			switch(b)
			{
				case 1:
					printf("You have successfully done Internet Recharge\n");
					break;
				case 2:
					printf("You have successfully done Top-up Recharge\n");
					break;
				case 3:
					printf("You have successfully done Special Recharge\n");
					break;
				default:
					printf("Plz.. select valid number");
			}
			break;
		case 2:
			printf("Internet Recharge ke liye 1 dabaiye\n");
			printf("Top-up Recharge ke liye 2 dabaiye\n");
			printf("Special Recharge ke liye 3 dabaiye\n");
			printf("Enter your choice:");
			scanf("%d",&c);
			switch(c)
			{
				case 1:
					printf("Aapne safaltapurvak Internet Recharge kar liya he\n");
					break;
				case 2:
					printf("Aapne safaltapurvak Top-up Recharge kar liya he\n");
					break;
				case 3:
					printf("Aapne safaltapurvak Special Recharge kar liya he\n");
					break;
				default:
					printf("Kripya sahi ank dabaiya");
			}
			break;
		case 3:
			printf("Internet Recharge mate 1 dabavo\n");
			printf("Top-up Recharge mate 1 dabavo\n");
			printf("Special Recharge mate 3 dabavo\n");
			printf("Enter your choice:");
			scanf("%d",&d);
			switch(d)
			{
				case 1:
					printf("Tame safaltapurvak Internet Recharge karyu che\n");
					break;
				case 2:
					printf("Tame safaltapurvak Top-up Recharge karyu che\n");
					break;
				case 3:
					printf("Tame safaltapurvak special Recharge karyu che\n");
					break;
				default:
					printf("Krupa karine sacho ank dabavo");
			}
			break;

		default:
			printf("Please select valid input");

	}
	getch();
}

