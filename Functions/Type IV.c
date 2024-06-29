// Tyepe III Function No Argument and no Return Type
#include<stdio.h>
#include<conio.h>
void add();
void main()
{

	add();	
	getch();
}

void add()
{	
	int a;
	float b, ram;
	printf("Enter values of a and b : ");
	scanf("%d%f", &a, &b);
	ram=a+b;
	printf("\nThe sum = %.2f",ram);	
	
}
