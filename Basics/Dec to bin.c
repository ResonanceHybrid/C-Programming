#include<stdio.h>
#include<conio.h>
void main()
{
	int dec,num, bin =0, i=1, rem; 
	printf("Enter a decimal number");
	scanf("%d", &dec);
	num = dec;
	while(dec !=0)
	{
		rem = dec % 2;
		bin = bin + rem * i;
		dec = dec /2;
		i = i * 10;
	}
	printf (" Binary of %d is %d",num,bin);
	getch();
}
