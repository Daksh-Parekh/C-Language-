#include<stdio.h>

void main()
{
	FILE *fp,*fp2;
	
	fp=fopen("even_file.txt","w");
	fp2=fopen("odd_file.txt","w");
	
	int i;
	
	for(i=50;i<=70;i++)
	{
		if(i%2==0)
		{
		
			fprintf(fp,"%d ",i);
		}
		else
		{
			fprintf(fp2,"%d ",i);
		}
	}
	fclose(fp);
	fclose(fp2);

}
