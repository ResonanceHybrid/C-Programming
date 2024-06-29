#include<stdio.h>
#include<conio.h>
int num =5;
int change(	);
void main()
{
	int n;
	printf("Num in main = %d\n",num);
	num =10;
	printf("Num in main before calling change = %d\n",num);
	n= change();
	printf("Num in main after calling change = %d\n",n);
	printf("Num in main after calling change = %d\n",num);
	getch();
		
}

int change()
{

	printf("Num in Change before value update = %d\n",num);
	num =20;
	printf("Num Num in change after value update = %d\n",num);
	return(num);
}
