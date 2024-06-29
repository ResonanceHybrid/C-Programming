#include<stdio.h>
#include<conio.h>
int toBin(int);
void main()
{
	int dec,num, bin; 
	printf("Enter a decimal number");
	scanf("%d", &dec);
	bin = toBin(dec);// a= sqrt(dec)
	printf (" Binary of %d is %d",dec,bin);
	getch();
}

int toBin(int dec)
{
	int rem, bin =0, i=1;	
		while(dec !=0)
		{
			rem = dec % 2;
			bin = bin + rem * i;
			dec = dec /2;
			i = i * 10;
		}
	return (bin);
}


