#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
	int num, f;
	printf("Enter a num:");
	scanf("%d",&num);
	f = fact(num);
	printf("Factorial = %d",f);\\
	getch();
}

int fact(int n)
{
	
	if( n ==1)
	{
		return 1;
	}
else
	{
		return(n*fact(n-1));	
	}	

}
