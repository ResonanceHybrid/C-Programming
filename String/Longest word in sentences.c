//WAP to find longest word in given sentence

#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
	char str[50], temp[20],word[20];
	int i,j=0,len1,len2=0,l;
	printf("Enter sentences: ");
	gets(str);
	l=strlen(str);
	str[l+1]='\0';
	str[l] =' ';
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			temp[j]=str[i];
			j++;
		}
		else
		{
			temp[j]='\0';
			len1=strlen(temp);
			if(len2<len1)
			{
				len2=len1;
				strcpy(word,temp);
			}
			j=0;
		}
	}
	printf("Longest word: ");
	puts(word);
	getch();
}
