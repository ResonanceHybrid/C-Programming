#include<stdio.h>
#include<conio.h>
#include<string.h>
void Read(char [][50], int);
void Arrange(char [][50], int);
void Display(char [][50], int);
int main()
{
	char str[50][50];
	int n;
	printf("Enter number of string you want to arrange\n");
	scanf("%d", &n);
	Read(str, n);
	Arrange(str, n);
	Display(str, n);
	getch();
	return 0;
}

void Read(char str[][50], int n)
{
	int i;
	printf("\nEnter %d strings\n", n);
	fflush(stdin);
	for(i=0; i<n; i++)
	{
		gets(str[i]);
	}
}

void Arrange(char str[][50], int n)
{
	int i, j;
	char temp[50];
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(strcmp(str[j], str[j+1]) > 0)
			{
				strcpy(temp, str[j]);
				strcpy(str[j], str[j+1]);
				strcpy(str[j+1], temp);
			}
		}
	}
}

void Display(char str[][50], int n)
	{
	int i;
	printf("\nIn dictionary order\n");
	for(i=0; i<n; i++)
	{
		puts(str[i]);
	}
}
