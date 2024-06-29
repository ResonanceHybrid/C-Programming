#include<stdio.h>
#include<conio.h>
#include<string.h>
void Rev(char[]);

void main()
{
	char word[100],txt[100];
	printf("Enter a word:\n");	
	gets(word);
	printf("Entered words:\n");
	puts(word);	
	strcpy(txt, word);
	Rev(word);
	printf("Reverse word:\n");
	puts(word);
	if((stricmp(txt,word))==0)
	{
		printf("This string is palindrome");
	}
	else
	{
		printf("This string is not palindrome");
	}
	getch();
		
}

void Rev(char word[100])
{
	int len,i;
	char temp;
	len = strlen(word);
	for(i=0; i<(len/2); i++)
	{
		temp = word[i];
		word[i] = word[len-i-1];
		word[len-i-1]= temp;
	}
}


