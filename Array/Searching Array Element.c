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
	
	printf("\nArray Elements:\n");
	
	for(i=0; i<n; i++)
	{
		printf("%d\t",num[i])	;
	}
	
	printf("\nEnter the Number to be Searched:- ");
	scanf("%d",&new);
	
	
	for(i=0; i<n; i++)
	{
		if(num[i]== new)
		{
			printf("%d Element Found in %d Position",new,i+1);
			break;
		}
		
	}
	
	if( i == n)
	{
		printf("%d Element is not found in array",new);
	}

	
	getch();
		
}
