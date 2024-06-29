#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char txt1[20],txt2[20];
	int d;
	printf("Enter a String:\n");
	gets(txt1);
	printf("Enter another String:\n");
	gets(txt2);
	d = strcmp(txt1,txt2);
	printf("The  String are: %s and %s",txt1, txt2);
	if(d==0)
	{
		printf("\nThey are same strings");	
	}
	else
	{
				printf("\nThey are different strings");	
	}
		
	getch();

}
