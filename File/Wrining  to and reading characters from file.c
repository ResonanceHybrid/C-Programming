/*
WAP to create a file named Test.txt. Read character from user untill enter key is pressed
and write those character to file one character at a time. Again read the contents of file 
Test.txt and display from monitor
*/

#include<conio.h>
#include<stdio.h>
#include<process.h>
void main()
{
	char ch;
	FILE *fp, *fptr;
	fp = fopen("d:\\Files\\Test.txt","w");
	if(fp == NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("Enter any characters: ");
	fflush(stdin);
	while((ch=getchar())!='\n')
	{
		fputc(ch,fp);
	}
	fclose(fp);
	fptr = fopen("d:\\Files\\Test.txt","r");
	if(fptr == NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("Reading From File......\n");
	printf("\nContents of file Test.txt is: ");
	while((ch = fgetc(fptr))!=EOF)
	{
		
		putchar(ch);
	}
	
	
//	fputc(ch,fptr);
	fclose(fptr);

}
