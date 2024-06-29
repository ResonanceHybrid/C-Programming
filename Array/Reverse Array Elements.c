#include<stdio.h>
#include<conio.h>
void main()
{
	int num[10],i,n, temp;
	printf("How many elements?");
	scanf("%d",&n);
	printf("Enter %d Elements:\n",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&num[i]);
	}
	
	printf("\nArray Elements Before Reverse:\n");
	
	for(i=0; i<n; i++)
	{
		printf("%d\t",num[i])	;
	}
	
	for(i=0; i<(n/2); i++)
	{
		temp = num[i];
		num[i] = num[n-i-1];
		num[n-i-1]= temp;
	}	
	
	printf("\nArray Elements after Reverse:\n");
	
	for(i=0; i<n; i++)
	{
		printf("%d\t",num[i])	;
	}
	getch();
		
}
