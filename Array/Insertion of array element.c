#include<stdio.h>
#include<conio.h>
void main()
{
	int num[10],i,n, pos, new, temp;
	printf("How many elements?");
	scanf("%d",&n);
	printf("Enter %d Elements:\n",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&num[i]);
	}
	
	printf("\nArray Elements Before Insertion:\n");
	
	for(i=0; i<n; i++)
	{
		printf("%d\t",num[i])	;
	}
	
	printf("\nEnter the Number to be Entered:- ");
	scanf("%d",&new);
	
	printf("\nEnter position:- ");
	scanf("%d",&pos);	
	
	
	for(i=pos-1; i<n+1; i++)
	{
		temp = num[i];
		num[i]= new;	
		new = temp;
	}
	
/*
	for(i= (n+1); i>= pos-1; i--)
	{
		num[i]= num[i-1];
	}
	num [pos-1]= new;
*/
	
	
	
	printf("\nArray Elements after Insertion:\n");
	
	for(i=0; i<n+1; i++)
	{
		printf("%d\t",num[i])	;
	}
	getch();
		
}
