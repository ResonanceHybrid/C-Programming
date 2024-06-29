#include<stdio.h>
#include<conio.h>
void main()
{
	int num[100],sum=0,i,n;
	printf("How many elements?\n");
	scanf("%d",&n);
	printf("Enter %d Elements",n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&num[i]);
	}
	
	printf("Elements of array are:\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",num[i]);
	}
	
	getch();
}
	
	
	
	
	
	
	
	
	
	
	
	
	for(i=0; i<10; i++)
	{
		sum = sum + num[i];
	}
	printf("Sum = %d", sum);
	getch();
		
}*/
