#include<stdio.h>
#include<conio.h>
#include<math.h>
int isPrime(int, int);

void main()
{
	int num,count=0,i=1;
	printf("Enter No. of terms:");
	scanf("%d",&num);
	count=isPrime(num,i);
	printf("C= %d\n",count);
	if(count==2)
	{
		printf("%d is Prime Number",num);
	}
	else
	{
		printf("%d is Not Prime Number",num);	
	}	
	getch();
}

int isPrime(int num,int i)
{
	static int count=0;
	if(num == i)
	{
		return count;
	}
	else
	{
		if(num % i==0)
		{
			count ++;
			isPrime(num,i=i+1);
			//return count;
			
		}
		
		else
		isPrime(num,i=i+1);
	}
}


