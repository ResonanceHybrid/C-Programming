#include<stdio.h>
#include<conio.h>
void main()
{
	int Mat[10][10], num[10],max, row,col, i,j;
	printf("Enter Row and Column:");
	scanf("%d %d",&row, &col);

	printf("Enter elements of Mat1:\n");
	for(i=0; i< row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d", &Mat[i][j]);
		}
	}
	
	
	
	for(i=0; i< row; i++)
	{
		max = Mat[i][0];
		for(j=0; j<col; j++)
		{
			if(max<Mat[i][j])
			{
				max = Mat[i][j];
			}
			
		}
		num[i]= max;
	}
	
	printf("Matrix before Replacement:\n");
	for(i=0; i< row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d\t", Mat[i][j]);
		}
		printf("\n");
	}
	
	
	
	printf("The Result is : \n");
	for(i=0; i< row; i++)
	{
		printf("%d\t",num[i]);
	}
}
