#include<stdio.h>
#include<conio.h>
void Read(int[][10],int , int);
void Multiply(int[][10],int[][10],int[][10],int , int, int);
void Display(int[][10],int , int);
void main()
{
	int Mat1[3][3],Mat2[3][3],Mat3[3][3],row1,col1, row2, col2,i,j;
	printf("Enter Row and Col of Matrix 1:\n");
	scanf("%d %d",&row1, &col1);
	printf("Enter Row and Col of Matrix 2:\n");
	scanf("%d %d",&row2, &col2);
	if( col1 == row2)
	{
		printf("\nThe Matrix Can be Multiplied: \n");
		printf("Enter the Elements of Mat1:\n");
		Read(Mat1,row1,col1);
		printf("Enter the Elements of Mat2:\n");
		Read(Mat2,row2,col2);
		Multiply(Mat1, Mat2, Mat3, row1, col2, row2);
		printf("\nProduct of of Matrix is: \n");
		Display(Mat3, row1, col2)	;
	}
	else
	{
		printf("\nThe Matrix Can not be Multiplied: \n");
	}
	
getch();
}

void Read(int Mat[10][10],int row, int col)
{
	int i,j;
	for(i=0; i< row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d", &Mat[i][j]);
		}
	}
}

void Display(int Mat[10][10],int row, int col)
{
	int i,j;
	for(i=0; i< row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d\t", Mat[i][j]);
		}
		printf("\n");
	}
}

void Multiply(int Mat1[10][10], int Mat2[10][10], int Mat3[10][10],int row1, int col2, int row2)
{
	int i,j,k;
	for(i=0; i< row1; i++ )
	{
		for(j = 0; j< col2; j++)
		{
			Mat3[i][j] = 0;
			for(k = 0; k < row2; k++)
			{
				Mat3[i][j]= Mat3[i][j] + Mat1[i][k] * Mat2[k][j];
			}
		}
	}
}
