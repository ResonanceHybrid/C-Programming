#include<stdio.h>
#include<conio.h>
int isPrime( int);
void main()
{
	int n1,n2, i, count;
	printf("Enter a Range:");
	scanf("%d %d",&n1,&n2);
	for(i = n1; i <= n2; i++)
	{
		count = isPrime(i);
		if ( count ==2)
		{
			printf("%d\t", i);
		}
	}
	
	getch();
}

int isPrime( int num)
{
	int count = 0, i;
	for(i=1; i<=num; i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	return(count);
	// return(a)
	
}
