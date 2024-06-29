#include<stdio.h>
#include<conio.h>
void main()
{
	float x,y;
	printf("Enter x");
	scanf("%f",&x);
	y= (x<=2)? (2.4*x + 3) : (3 *x - 5);
	printf("y= %f",y);
	getch();	
}

