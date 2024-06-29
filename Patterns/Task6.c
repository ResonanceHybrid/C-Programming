#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char txt[10];
	int len, i,j;
	printf("Enter string:\n");
	gets(txt);
	len = strlen(txt);
	printf("\nThe Pattern is:\n\n");
	for(i=0; i<3; i++)
	{
		for(j =0; j<len; j++)
		{
			if(i+j >= 2 && j-i<=2)
			{
			printf("%c ",txt[j]);				
			}
			else{
				printf("  ");
			}

		}
		printf("\n");
	}
}
