#include<stdio.h>
#include<conio.h>
void main()
{
	int num, sum, rem;
	printf("Enter a number");
	scanf("%d", &num);
	sum = num;
	while( sum > 9)
	{
		sum = 0;
		while( num!=0 )
		{
			rem = num % 10;
			sum = sum + rem;
			num = num /10;
			
		}
		num = sum;
	}
	printf("sum = %d", sum);

	getch();
}

