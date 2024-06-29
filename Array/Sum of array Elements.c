#include<stdio.h>
#include<conio.h>
void main()
{
	int num[100],sum=0,i,n;
	printf("How many elements?\n");
	scanf("%d",&n);
	printf("\nEnter %d Elements:\n",n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&num[i]);
	}
	
	printf("\nElements of array are:\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",num[i]);
	}
		
	for(i=0; i<n; i++)
	{
		sum = sum + num[i];
	}
	printf("\n\nSum = %d", sum);
	getch();
		
}
