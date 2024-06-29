#include<stdio.h>
#include<conio.h>
void main()
{
	int Mat[10][10], sum = 0, n, i,j;
	printf("Enter the Order of Matrix:\n");
	scanf("%d",&n);
	printf("Enter elements of Mat1:\n");
	for(i=0; i< n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &Mat[i][j]);
		}
	}
	
	
	printf("Matrix :\n");
	for(i=0; i< n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t", Mat[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i< n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i==j || i+ j == n-1)
			{
				sum = sum + Mat[i][j];
			}
		}
	}
	
	
	printf("The Sum is  : %d \n",sum);
	getch();

	}

