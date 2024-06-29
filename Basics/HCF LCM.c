#include<stdio.h>
#include<conio.h>
void main()
{
	int num1, num2, i, hcf, lcm, num;
	printf(" Enter Two number:\n");
	scanf( "%d  %d", &num1, &num2);
	num = (num1<num2)? num1: num2;
	for(i=num; i>=1; i--)
	{
		if ( num1 %i==0 && num2 % i==0)
		{
			hcf = i;
			break;
		}
	}
	lcm = (num1 * num2)/hcf;
	printf("Lcm = %d\nHcf = %d", lcm, hcf);	
		
	getch();
}
