#include<stdio.h>
#include<conio.h>
int Str_cmp(char[],char[]);
void main()
{
	int d;
	char word1[100],word2[100];
	printf("Enter a word:\n");	
	gets(word1);
	printf("Enter another word:\n");	
	gets(word2);
	
	d= Str_cmp(word1, word2);
	if(d == 0)
	{
		printf("The entered words are same");
	}
	else
	{
		printf("The entered words are different");
	}
	getch();
		
}

int Str_cmp(char word1[100], char word2[100])
{
	int i, d;

	for(i=0; (word1[i]!='\0' || word2[i]!='\0'); i++)
	{
		d = word2[i]- word1[i] ;
		if(d!=0)
		{
			break;;
		}
	}
	return(d);
}


