#include<conio.h>
#include<stdio.h>
#include<process.h>
void main()
{
	char ch;
	FILE *fp;
	fp = fopen("d:\\Files\\Test.txt","w");
	if(fp == NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("Enter any character: ");
	fflush(stdin);
	ch =getchar();
	
	fputc(ch,fp);
	fclose(fp);

}
