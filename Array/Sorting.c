#include<stdio.h>
#include<conio.h>

void main()
{

	int num[100],i,j,temp,n;
	printf("How many elements?\n");
	scanf("%d",&n);
	printf("Enter %d Elements",n);	
	for(i=0; i<n; i++)
	{
		scanf("%d",&num[i]);
	}
	
	//Sorting
	for(i=0; i< n-1; i++)
	{
		for(j =0; j<n-i-1; j++)
		{
			if( num[j] > num[j+1])
			{
				//swap
				temp =num[j];
				num[j]= num[j+1];
				num[j+1]= temp;
				
			}
		}
	}
	
	
	printf("Elements of array in Sorred Order are:\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",num[i]);
	}
	
	getch();
}
