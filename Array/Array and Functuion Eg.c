#include<stdio.h>
#include<conio.h>
void Change(int[],int);
void main()
{
	int Num[50], i, n;
	printf("Enter how manu elements:\n");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&Num[i]);
	}
	
	printf("Elements of array:\n");
	for(i =0; i<n; i++)
	{
		printf("%d\t",Num[i]);
	}
	Change(Num, n);
	printf("\nElements of array after calling change:\n");
	for(i =0; i<n; i++)
	{
		printf("%d\t",Num[i]);
	}
}

void Change(int a[50], int n)
{
	int i;
	for(i =0; i<n; i++)
	{
		a[i]= a[i] + 10;
	}
}
