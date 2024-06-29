#include<stdio.h>
#include<conio.h>
struct Complex
{
	int real;
	int img;
};

struct Complex Product(struct Complex c1, struct Complex c2)
{
	struct Complex prod;
	prod .real = c1.real * c2.real - c1.img * c2.img;
	prod.img =  c1.real * c2.img + c1. img * c2.real;
	return(prod);
	
}

void main()
{
	struct Complex c1, c2, p;
	printf("Enter real part and img part of a complex number:\n");
	scanf("%d %d",&c1.real, &c1.img);
	printf("Enter real part and img part of another complex number:\n");
	scanf("%d %d",&c2.real, &c2.img);
	p = Product(c1,c2);	
	printf("\nSum of two real numbers is   :  %d + i%d",p.real, p.img);
	getch();	

}
