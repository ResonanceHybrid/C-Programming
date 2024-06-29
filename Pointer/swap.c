#include<stdio.h>
#include<conio.h>

void Swap(int *, int *);
void main()
{
	int a, b;
	printf("Enter two values");
	scanf("%d %d",&a, &b);
	printf("\nBefore swapping:\na= %d\nb= %d",a,b);
	Swap(&a,&b);
	printf("\n After Swapping:\na= %d\nb= %d",a,b);
	getch();
}

void Swap( int *x, int *y )
{
	int temp;
	temp = *x;
	*x= *y;
	*y = temp;
//	printf("\n After Swapping:\na= %d\nb= %d",x,y);	
	
}
