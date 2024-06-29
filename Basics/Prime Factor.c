#include<stdio.h>
#include<conio.h>
void main()
{
	int num, i, count,j;
	printf(" Enter a number");
	scanf( "%d", &num);
	for( i= 1; i <= num; i++)
	{
		count = 0;
		if ( num % i == 0)
		{
			for ( j=1; j <= i; j++)
			{
				if ( i % j ==0)
				{
					count++;
				}
			}
			if ( count ==2 )
			{
				printf(" %d\t",i);
			}
		}
		
	}
		
	getch();
}
