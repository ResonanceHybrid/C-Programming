#include<stdio.h>
#include<conio.h>
void main()
{
	int Mat1[5][5],Mat2[5][5],Mat3[5][5],r1,c1,r2, c2,i,j;
	printf("Enter row and column of First matrix:\n");
	scanf("%d %d", &r1, &c1);
	printf("Enter row and column of Second matrix:\n");
	scanf("%d %d", &r2, &c2);
	if(r1 == r2 && c1 == c2)
	{
		printf("Two Matrices can be added:\n");
		printf("Enter elements of Mat1:\n");
		for(i=0; i< r1; i++)
		{
			for(j=0; j<c1; j++)
			{
				scanf("%d", &Mat1[i][j]);
			}
		}
		
		printf("Enter elements of Mat2:\n");
		for(i=0; i< r2; i++)
		{
			for(j=0; j<c2; j++)
			{
				scanf("%d", &Mat2[i][j]);
			}
		}
		
		for(i=0; i< r1; i++)
		{
			for(j=0; j<c1; j++)
			{
				Mat3[i][j]= Mat1[i][j] + Mat2[i][j];
			}
		}
		
		
		
		printf("Sum of Matrix is: \n");
		for(i=0; i< r1; i++)
		{
			for(j=0; j<c1; j++)
			{
				printf("%d\t", Mat3[i][j]);
			}
			printf("\n");
		}
			
	}
	else
	{
		printf("Those Matrices cannod be added:\n");
	}
	
	
	getch();
	

}
