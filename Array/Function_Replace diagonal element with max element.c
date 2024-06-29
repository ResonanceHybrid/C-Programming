#include<stdio.h>
#include<conio.h>
void Read(int[][10], int );
void Display(int[][10], int);
int Find_Max(int[][10], int);
void Replace (int[][10], int, int);
void main()
{
	int Mat[10][10], n, max;
	printf("Enter Order of Matrix:");
	scanf("%d",&n);
	printf("Enter elements of Mat1:\n");
	Read(Mat,n);
	printf("\nMatrix before Replacement:\n");	
	Display(Mat,n);
	max = Find_Max(Mat, n);
	Replace(Mat, n, max);	
	printf("\nMatrix after Replacement:\n");
	Display(Mat,n);
	getch();
}

void Read(int Mat[10][10], int n)
{
	int i,j;

	for(i=0; i< n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &Mat[i][j]);
		}
	}
}
void Display(int Mat[10][10], int n)
{
	int i,j;
	for(i=0; i< n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t", Mat[i][j]);
		}
		printf("\n");
	}	
}

int Find_Max(int Mat[10][10], int n)
{
	int i,j, max;
	max = Mat[0][0];
	for(i=0; i< n; i++)
	{
		for(j=0; j<n; j++)
		{
			max= max> Mat[i][j]? max: Mat[i][j];
		}
		
	}
	return(max);
}

void Replace(int Mat[10][10], int n, int max)
{
	int i,j;
	for(i=0; i< n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i==j || i+j == n-1)
			{
				Mat[i][j] = max;
			}
		}
	}

}	



	
	
	

