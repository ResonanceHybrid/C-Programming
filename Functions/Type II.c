
// Tyepe II Function with Argument and No Return Type
#include<stdio.h>
#include<conio.h>
void add(int, float);
void main()
{
	int a;
	float b;
	printf("Enter values of a and b : ");
	scanf("%d%f", &a, &b);
	add(a , b);
	getch();
}
void add(int p, float q)
{
	float ram;
	ram=p+q;
	printf("\nThe sum = %.2f",ram);
}

