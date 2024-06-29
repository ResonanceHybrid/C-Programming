#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char txt[10]="nepal";
	int len, i,j;
//	printf("Enter string:\n");
//	gets(txt);
	len = strlen(txt);
	printf("\nThe Pattern is:\n\n");
	for(i=0; i<len; i++)
	{
		for(j =0; j<9; j++)
		{
			if(i+j >= 4 && j-i<=4)
			{
				if(i%2==0)
				{
					txt[i]=toupper(txt[i]);
					printf("%c ",txt[i]);
				}
				else
				{
					printf("%c ",txt[i]);					
				}
				
			}
			else{
				printf("  ");
			}

		}
		printf("\n");
	}
}
