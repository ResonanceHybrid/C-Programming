#include<stdio.h>
#include<conio.h>
int sum(int);
int term(int);
void main()
{
	int n,s;
	printf("Enter No. of terms:");
	scanf("%d",&n);
	s=sum(n);
	printf("Sum of series = %d",s);
	getch();
}

int sum(int n)
{
	if(n ==1)
	{
		return 1;
	}
	else
	{
		return(term(n) + sum(n-1));
	}
}

int term(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return(term(n-1)*10 +1);
	}
}
