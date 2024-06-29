#include<stdio.h>
#include<conio.h>
void Rev(char[]);
int Str_len(char[]);
void main()
{
	char word[100];
	printf("Enter a word:\n");	
	gets(word);
	printf("Entered words:\n");
	puts(word);	
	Rev(word);
	printf("Reverse word:\n");
	puts(word);
	getch();
		
}

void Rev(char word[100])
{
	int len,i;
	char temp;
	len = Str_len(word);
	for(i=0; i<(len/2); i++)
	{
		temp = word[i];
		word[i] = word[len-i-1];
		word[len-i-1]= temp;
	}
}

int Str_len(char word[100])
{
	int len;
	for(len =0; word[len]!='\0'; len++);
	
	return(len);
}
