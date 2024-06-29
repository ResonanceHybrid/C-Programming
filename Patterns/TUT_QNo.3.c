#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char txt[15];
	int len, i,j;
	printf("Enter string:\n");
	gets(txt);
	len = strlen(txt);
	printf("\nThe Pattern is:\n\n");
	for(i=0; i<6; i++)
	{
		for(j =0; j<len; j++)
		{
			if(i+j <= len-1 && j>=i)
			{
				printf("%c ",txt[j]);				
			}

		}
		printf("\n");
	}
}
