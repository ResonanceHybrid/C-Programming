#include<stdio.h>
#include<conio.h>
void main()
{
	char ch1, ch2;
	int i;
	printf("Enter Range");
	fflush(stdin);
	ch1= getchar();
	fflush(stdin);
	ch2= getchar();
	for(i=ch1; i<=ch2; i++)
	{
		printf("%d\t",i);
	}

	getch();
	}

