
// Function with Argument and Return Type
#include<stdio.h>
#include<conio.h>
float add(int, float);
void main()
{
	int a;
	float b, sum;
	printf("Enter values of a and b : ");
	scanf("%d%f", &a, &b);
	sum=add(a , b);
	printf("\nThe sum = %f",sum);
	getch();
}
float add(int p, float q)
{
	float s;
	s=p+q;
	return s;
}

