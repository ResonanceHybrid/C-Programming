#include<stdio.h>
#include<conio.h>
void main()
{
	int unit;
	float bal;
	printf("Enter Unit:");
	scanf("%d",&unit);
	if(unit<=20)
	{
		bal = 80;
	}
	else if(unit > 20 && unit <=120)
	{
		bal = 80 + (unit-20) * 7.3;
	}
	
	else
	{
		bal = 80 + (120 - 20) * 7.3 + (unit - 120) * 9.00;
	}
	
	printf("Balance : = %.2f ", bal);
	getch();
	
}
