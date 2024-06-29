#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char txt[10]="nepal";
	int len, i,j;
	puts("The Patters is\n");
	len = strlen(txt);
	for(i=0; i<len; i++)
	{
		for(j =0; j<9; j++)
		{
			if(i+j >= 4 && j-i<=4)
			{
				if(i%2==0)
				{
					txt[i]=toupper(txt[i]);
					putchar(txt[i]);
				}
				else
				{
					putchar(txt[i]);					
				}
				
			}
			else
			{
				putchar(' ');

			}

		}
		putchar('\n');

	}
}
