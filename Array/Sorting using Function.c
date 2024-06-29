#include<stdio.h>
#include<conio.h>
void Read(int[],int);
void Sort(int[],int);
void Display(int[],int);
void main()
{

	int num[100],n;
	printf("How many elements?\n");
	scanf("%d",&n);
	printf("Enter %d Elements:\n",n);	
	Read(num,n);
	printf("Elements of array Before Sorting:\n");
	Display(num,n);	
	Sort(num,n);
	printf("Elements of array in Sorred Order are:\n");
	Display(num,n);
	getch();
}

void Read(int num[100],int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		scanf("%d",&num[i]);
	}
}

void Sort(int num[100],int n)
{
	int i,j,temp;
	for(i=0; i< n-1; i++)
	{
		for(j =0; j<n-i-1; j++)
		{
			if( num[j] > num[j+1])
			{
				temp =num[j];
				num[j]= num[j+1];
				num[j+1]= temp;
				
			}
		}
	}
}
	
void Display(int num[100],int n)
{
	int i;
		for(i=0; i<n; i++)
	{
		printf("%d\t",num[i]);
	}
}

