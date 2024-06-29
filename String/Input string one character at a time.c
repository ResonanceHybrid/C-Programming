#include<stdio.h>
#include<conio.h>
void main()
{
	char txt[20];
	int i=0;
	printf("Enter String:\n");
	
	for(i=0; txt[i-1]!='\n';i++)
	{
		scanf("%c",&txt[i]);
	}
	txt[i-1]='\0';

/*	do{
		scanf("%c",&txt[i]);
		i++;
	}while(txt[i-1]!='\n');
	txt[i]='\0';	
*/	
	printf("The  String is:\n");
	for(i=0; txt[i]!='\0';i++)
	{
		printf("%c",txt[i]);
	}
}
