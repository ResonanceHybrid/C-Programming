#include<stdio.h>
#include<conio.h>
void main()
{
	int num[10],freq[10],i,n,j,count,k=0,New_Arr[10];
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
	
	for( i=0; i<n; i++)
	{
		count = 0;
		for(j=i; j<n; j++)
		{
			if((num[i] == num[j]) && (count ==0))
			{
				New_Arr[k]= num[i];
				k++;
				count++;
			}
			else
			{
				count++;
			}
			freq[k]=count;
		}
				
	}
	
/*	for( i=0; i<n; i++)
	{
	
		for(j=0; j<n; j++)
		{
			if(num[i]== num[j])
			{
			
				New_Arr[k]= num[i];
			}
			else
			{
				k++;
			}
			freq[i]= count;
		}
	}*/
	
	printf("\nArray Elements with their occurance Frequency:\n");
	
	for(i=0; i<k; i++)
	{
		printf("%d => %d\n",New_Arr[i], freq[i])	;
	}
	getch();
		
}
