#include<stdio.h>
#include<conio.h>
int isprime(int);
void main()
{
	int num, count;
	printf("Enter a Number:");
	scanf("%d",&num);
	count = isprmie(num);	
	if(count==2)
	{
		printf("Primr");
	}
	else
	{
		printf("Not Prime");
	}
	getch();
}

int isprime(int num)
{
	int i, count =0;
	for(i=1; i<=num; i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	return(count);
}
