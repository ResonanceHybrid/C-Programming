#include<stdio.h>
#include<conio.h>
struct Complex
{
	int real;
	int img;
};

void Addition(struct Complex *c1, struct Complex *c2, struct Complex *sum)
{
	sum->real = c1->real + c2->real;
	sum->img =  c1->img + c2->img;
	
}

void Display(struct Complex *sum)
{
	printf("\nSum of two real numbers is   :  %d + i%d",sum->real, sum->img);
}

void main()
{
	struct Complex c1, c2, sum;
	printf("Enter real part and img part of a complex number:\n");
	scanf("%d %d",&c1.real, &c1.img);
	printf("Enter real part and img part of another complex number:\n");
	scanf("%d %d",&c2.real, &c2.img);
	Addition(&c1,&c2,&sum);
	Display(&sum);		
	getch();	

}
