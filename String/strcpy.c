#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char txt1[20], txt2[20];

	printf("Enter String:\n");
	gets(txt1);
	printf("The string is : %s",txt1);
	strcpy(txt2, txt1);
	printf("\nThe copied String is: %s",txt2);
	getch();

}
