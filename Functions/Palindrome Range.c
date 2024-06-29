#include<stdio.h>
#include<conio.h>
int isPal( int);
void main()
{
	int n1,n2, i, rev;
	printf("Enter a Range:");
	scanf("%d %d",&n1,&n2);
	for(i = n1; i <= n2; i++)
	{
		rev = isPal(i);
		if ( rev == i)
		{
			printf("%d\t", i);
		}
	}
	
	getch();
}

int isPal( int num)
{
	int rem, rev=0;
	while(num!=0)
	{
		rem = num%10;
		rev = rev *10 + rem;
		num = num/10;
	}
	return (rev);
	
}
