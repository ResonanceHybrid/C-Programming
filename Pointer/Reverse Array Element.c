#include<stdio.h>
#include<conio.h>
void Reverse(int[], int);
void Read(int[], int);
void Display(int[], int);
void main()
{
	int num[10],i,n, temp;
	printf("How many elements?");
	scanf("%d",&n);
	printf("Enter %d Elements:\n",n);
	Read(num, n);	
	printf("\nArray Elements Before Reverse:\n");
	Display(num, n);
	Reverse(num, n);	
	printf("\nArray Elements after Reverse:\n");
	Display(num, n);
	getch();
		
}

void Reverse(int num[10], int n)
{
	int i, temp;
	for(i=0; i<(n/2); i++)
	{
		temp = *(num + i);
		*(num + i) = *(num +n -i-1);
		*(num +n -i-1)= temp;
	}	
}

void Read(int num[10], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		scanf("%d",(num + i));
	}
}

void Display(int num[10], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d\t",*(num + i))	;
	}
}
