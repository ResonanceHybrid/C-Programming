#include<stdio.h>
#include<conio.h>

void str_concat(char[], char[]);
void main()
{
	char txt1[20], txt2[20];

	printf("Enter String:\n");
	gets(txt1);
	printf("Enter another String:\n");
	gets(txt2);
	printf("String1= %s\nString2 = %s\n",txt1,txt2);
	str_concat(txt1, txt2);
	printf("\nThe copied String is: %s",txt1);
	getch();

}

void str_concat(char txt1[20], char txt2[20])
{
	int i,j,len=0;
	for(j=0; txt1[j]!='\0';j++)
	{
		len++;
	}
	
	
	for(i=0; txt2[i]!='\0'; i++)
	{
		txt1[len+i] = txt2[i];
	}
	txt1[i+len]= '\0';
}


