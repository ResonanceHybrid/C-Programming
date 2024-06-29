#include<conio.h>
#include<stdio.h>
#include<process.h>
void main()
{
	char ch;
	FILE *fp;
	fp = fopen("d:\\Files\\Test.txt","r");
	if(fp == NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("Character of file Test.txt is: ");
	while((ch = fgetc(fp))!=EOF)
	{
		
		//ch =fgetc(fp);
		putchar(ch);
	}
	fclose(fp);
	getch();
}
