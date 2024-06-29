#include<stdio.h>
#include<conio.h>
void main()
{
	char txt[20];
	int i;
	printf("Enter String:\n");
	gets(txt);
	printf("The  String is:\n");
	for(i=0; txt[i]!='\0';i++)
	{
		printf("%c\n",txt[i]);
		getch();
	}
}
