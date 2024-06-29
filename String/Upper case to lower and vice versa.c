#include<stdio.h>
#include<conio.h>
void stringconvert(char []);
void main()
{
	char str[100];
	printf("Enter a string : ");
	gets(str);
	printf("String before conversion : ");
	puts(str);
	stringconvert(str);
	printf("String after conversion : ");
	puts(str);
	getch();
}
void stringconvert(char str[])
{
	int i;
	if(str[0] >= 'a' && str[0] <= 'z')
	{
		i = 0;
		while(str[i]!= '\0')
		{
			if(str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = toupper(str[i]);
			}
		i++;
	}
	}
	else if(str[0] >= 'A' && str[0] <= 'Z')
	{
	i=0;
	while(str[i]!='\0')
	{
	if(str[i] >= 'A' && str[i] <= 'Z')
	{
	str[i] =str[i] + 32;
	}
	i++;
	}
	}
	else
	{
	printf("\nString is started without upper case or lower case.");
	}
