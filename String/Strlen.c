#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char txt[20];
	int len;
	printf("Enter String:\n");
	gets(txt);
	len = strlen(txt);
	printf("The  String is: %s\nIts length is: %d",txt, len);
	getch();

}
