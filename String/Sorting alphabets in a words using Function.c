#include<stdio.h>
#include<conio.h>
#include<string.h>
void Read(char[]);
void Sort(char[]);
void Display(char[]);
void main()
{

	char word[100];
	printf("Enter a word:\n");	
	Read(word);
	printf("Entered words:\n");
	Display(word);	
	Sort(word);
	printf("Alphabetical order:\n");
	Display(word);
	getch();
}

void Read(char word[100])
{
	gets(word);
}

void Sort(char word[100])
{
	int i,j,temp,len;
	len = strlen(word);
	for(i=0; i< len-1; i++)
	{
		for(j =0; j<len-i-1; j++)
		{
			if( word[j] > word[j+1])
			{
				temp =word[j];
				word[j]= word[j+1];
				word[j+1]= temp;
				
			}
		}
	}
}
	
void Display(char word[100])
{
	puts(word);
}

