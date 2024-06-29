/*
WAP to create a file named Test.txt. Read string from user and write that string to file. 
Again read the contents of file Test.txt and display from monitor.
*/
#include<conio.h>
#include<stdio.h>
#include<process.h>
void main()
{
	char ch1[100],ch2[100];
	FILE *fp, *fptr;
	fp = fopen("d:\\Files\\Test.txt","w");
	if(fp == NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("Enter a String: ");
	fflush(stdin);
	gets(ch1);
	fputs(ch1, fp);
	fclose(fp);
	fptr = fopen("d:\\Files\\Test.txt","r");
	if(fptr == NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("Reading From File......\n");
	fgets(ch2,20,fptr);
	printf("\nContents of file Test.txt is: ");
	puts(ch2);	
	fclose(fptr);

}
