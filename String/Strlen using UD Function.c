#include<stdio.h>
#include<conio.h>
int Str_length(char[]);
void main()
{
	char txt[20];
	int len;
	printf("Enter String:\n");
	gets(txt);
	len = Str_length(txt);
	printf("The  String is: %s\nIts length is: %d",txt, len);
	getch();

}

int Str_length(char txt[20])
{
	int i, len=0;
	for(i=0; txt[i]!='\0';i++)
	{
		len++;
	}
	return(len);
}
