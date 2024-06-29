#include<stdio.h>
#include<conio.h>
void Read(int[][10], int );
void Display(int);
int Find_Max(int[][10], int);
void main()
{
	int Mat[10][10], n, max;
	printf("Enter Order of Matrix:");
	scanf("%d",&n);
	printf("Enter elements of Mat1:\n");
	Read(Mat,n);
	max = Find_Max(Mat, n);
	Display(max);
	getch();
}

void Read(int Mat[10][10], int n)
{
	int i,j;

	for(i=0; i< n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", (*(Mat+i)+j));
		}
	}
}
void Display(int max)
{
	printf("Max Element = %d", max);

}

int Find_Max(int Mat[10][10], int n)
{
	int i,j, max;
	max = *(*(Mat+0)+0);
	for(i=0; i< n; i++)
	{
		for(j=0; j<n; j++)
		{
			max= max> *(*(Mat+i)+j)? max: *(*(Mat+i)+j);
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
				*(*(Mat+i)+j) = max;
			}
		}
	}

}	



	
	
	

