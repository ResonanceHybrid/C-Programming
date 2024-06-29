#include<stdio.h>
#include<conio.h>
void main()
{
	char gen;
	float bal;
	printf("Enter balance");
	scanf("%f",&bal);
	printf("Enter Gender");
	fflush(stdin);
	gen = getchar();
	if( gen == 'f')
	{
		if(bal>=5000)
		{
			bal = 1.05* bal;// bal = bal + 0.05*bal;
		}
		else
		{
			bal = 1.02*bal;
		}
	}
	else
	{
		bal = bal * 1.02
	}
	prinft("Balance= %f", bal);
	getch();
	}

