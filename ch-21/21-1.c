#include<stdio.h>

void main()
{
	FILE *fp,*fp2;
	
	fp = fopen("F:\\7284_Daksh\\ch-21\\name.xls","r");
	fp2 = fopen("F:\\7284_Daksh\\ch-21\\name.txt","a");
	
	int a;
	if(fp != NULL){
		fscanf(fp,"%d",&a);	
		
		
		fprintf(fp2,"%d",a);
	}
	else{
		printf("Falied to open a file..");		
	}
	fclose(fp);
}
