#include<stdio.h>
#include<conio.h>
typedef struct Complex
{
	int real;
	int img;
}Comp;

 Comp c1, c2, sum, diff;

void main()
{
	printf("Enter real part and img part of a complex number:\n");
	scanf("%d %d",&c1.real, &c1.img);
	printf("Enter real part and img part of another complex number:\n");
	scanf("%d %d",&c2.real, &c2.img);
	sum .real = c1.real + c2.real;
	sum.img =  c1.img + c2. img;
	diff .real = c1.real - c2.real;
	diff.img =  c1.img - c2. img;
	
	printf("\nSum of two real numbers is   :  %d + i%d",sum.real, sum.img);
	printf("\nDiff of two real numbers is  :  %d + i %d",diff.real, diff.img);	


	getch();	

}
