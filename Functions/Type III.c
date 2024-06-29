// Tyepe III Function No Argument and Return Type
#include<stdio.h>
#include<conio.h>
float add();
void main()
{
	float s;
	s=add();
	printf("\nThe sum = %.2f",s);
	getch();
}

float add()
{
	
	int a;
	float b, ram;
	printf("Enter values of a and b : ");
	scanf("%d%f", &a, &b);
	ram=a+b;
	return (ram);
	
}
