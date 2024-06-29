#include<stdio.h>
#include<conio.h>
void main()
{
	int num, num1, fact, rem, i , sum =0;
	printf("Enter Number");
	scanf("%d", &num);
	num1 = num;
	while(num1 != 0)
	{
		rem= num1 % 10;
		fact = 1;
		for( i = 1; i<= rem; i++)
		{
			fact = fact *i;
		}
		sum = sum + fact;
		num1 = num1/10;
	}
	if(sum == num)
	{
		printf("Strong");
	}
	else
	{
		printf("Not Strong");	
	}

	getch();
}
