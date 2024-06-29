#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j,n;
	printf("Enter the value of n");
	scanf("%d", &n);
	for( i = 1; i <=n; i++)
	{
		for ( j = 1; j<=n; j++)
		{
			if (i+j>=6 && i>=j)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	getch();
}
