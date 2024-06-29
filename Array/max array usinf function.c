#include<stdio.h>
#include<conio.h>
void Read(int[],int);
int Find_Max(int[],int);
void Display(int);
void main()
{

	int num[100],n, max;
	printf("How many elements?\n");
	scanf("%d",&n);
	printf("Enter %d Elements:\n",n);	
	Read(num,n);
	max = Find_Max(num, n);
	Display(max);
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

int Find_Max(int num[100],int n)
{
	int i, max;
	max = num[0];
	for(i=0; i< n-1; i++)
	{
		max= max>num[i]?max:num[i];
	}
	return(max);
}
	
void Display(int max)
{

		printf("Maximum elements of array is %d\t",max);
	
}

