#include<stdio.h>
#include<conio.h>

void Calculate(int, int, int*, int*);
void main()
{
	int a, b, max, min;
	printf("Enter two values");
	scanf("%d %d",&a, &b);
	Calculate(a,b,&max, &min);
	printf("\nMax= %d\nMin= %d",max,min);
	getch();
}

void Calculate( int x, int y, int *xptr, int *yptr )
{
	if(x>y)
	{
		*xptr = x;
		*yptr = y;
	}
	else
	{
		*xptr = y;
		*yptr = x;
	}
	
}
