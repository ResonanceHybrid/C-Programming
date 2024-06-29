#include<stdio.h>
#include<conio.h>
void toBin(int, int*);
void main()
{
	int dec,num, bin; 
	printf("Enter a decimal number");
	scanf("%d", &dec);
	toBin(dec, &bin);// a= sqrt(dec)
	printf (" Binary of %d is %d",dec,bin);
	getch();
}

void toBin(int dec, int *x)
{
	int rem, i=1, bin=0;	
		while(dec !=0)
		{
			rem = dec % 2;
			bin = bin + rem * i;
			dec = dec /2;
			i = i * 10;
		}
		*x= bin;

}


