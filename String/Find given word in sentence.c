// WAP to find given word in sentences
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char txt1[50], txt2[20],txt3[20];
	int i,j=0,len;
	printf("Enter sentences: ");
	gets(txt1);
	len = strlen(txt1);
	txt1[len]=' ';
	txt1[len+1]='\0';
	printf("Enter word: ");
	gets(txt2);
	for(i=0;txt1[i]!='\0';i++)
	{
		if(txt1[i]!=' ')
		{
			txt3[j]=txt1[i];
			j++;
		}
		else
		{
			txt3[j]='\0';
			j=0;
			if(stricmp(txt3,txt2)==0)
			{
				printf("Word Found!!");
				printf("\nThe word is : %s ", txt3);
				break;
			}
		}
	}
	if(txt1[i]=='\0')
	{
		printf("Word not Found");
	}
	getch();
}
