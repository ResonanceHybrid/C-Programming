#include<stdio.h>
#include<conio.h>
void main()
{
	int num[10],i,n, pos;
	printf("How many elements?");
	scanf("%d",&n);
	printf("Enter %d Elements",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&num[i]);
	}
	
	printf("\nArray Elements Before Deletion:\n");
	
	for(i=0; i<n; i++)
	{
		printf("%d\t",num[i])	;
	}
	
	printf("\nEnter position");
	scanf("%d",&pos);
	
	
	
	for(i=pos-1; i<n; i++)
	{
		num[i]= num[i+1];	
	}
	
	printf("\nArray Elements after Deletion:\n");
	
	for(i=0; i<n-1; i++)
	{
		printf("%d\t",num[i])	;
	}
	getch();
		
}
