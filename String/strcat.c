#include<stdio.h>
#include<conio.h>
#include<string.h>


void main()
{
	char txt1[20], txt2[20];

	printf("Enter String:\n");
	gets(txt1);
	printf("Enter another String:\n");
	gets(txt2);
	printf("String1= %s\nString2 = %s\n",txt1,txt2);
	strcat(txt1, txt2);
	printf("\nThe copied String is: %s",txt1);
	getch();

}




