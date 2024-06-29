#include<stdio.h>
#include<conio.h>
void Factor(int);
int isPrime(int);
void main()
{
	int num;
	printf("Enter a num:");
	scanf("%d",&num);
	printf("The Prime factors of %d are:\n",num);
	Factor(num);
	getch();
}
void Factor(int n)
{
	int i,count;
	for(i=1; i<= n; i++)
	{
		if(n % i==0)
		{
			count = isPrime(i)	;
			if(count ==2)
			{
				printf("%d\t",i);
			}
		}
	}
	
	}
	

int isPrime(int num)
{
	int i, c=0;
	for(i=1; i<= num; i++)
	{
		if(num % i==0)
		{
			c++;
		}
	}
	return(c);
}


