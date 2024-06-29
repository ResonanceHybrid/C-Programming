#include<stdio.h>
#include<conio.h>
void main()
{
	int Mat[10][10], max, n, i,j;
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
	
	max = Mat[0][0];
	
	for(i=0; i< n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(max<Mat[i][j])
			{
				max = Mat[i][j];
			}
		}
	}
	
	printf("Matrix before Replacement:\n");
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
			if(i==j)
			{
				Mat[i][j]= max;
			}
		}
	}
	
	
	printf("The Result is : \n");
	for(i=0; i< n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t", Mat[i][j]);
		}
		printf("\n");
	}
}
