#include<stdio.h>
#include<conio.h>
typedef struct Complex
{
	int real;
	int img;
}Comp;

 Comp c1, c2, prod;

void main()
{
	printf("Enter real part and img part of a complex number:\n");
	scanf("%d %d",&c1.real, &c1.img);
	printf("Enter real part and img part of another complex number:\n");
	scanf("%d %d",&c2.real, &c2.img);
	prod .real = c1.real * c2.real - c1.img * c2.img;
	prod.img =  c1.real * c2.img + c1. img * c2.real;
	
	printf("\nSum of two real numbers is   :  %d + i%d",prod.real, prod.img);
	
	
	getch();	

}
