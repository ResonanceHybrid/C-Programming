#include<stdio.h>
#include<conio.h>
void main()
{
	int ft=0, st=1, nt, i,n;
	printf("Enter No. of Terms");
	scanf("%d", &n);
	printf("Fibonacci Series = %d,\t %d,\t", ft, st);
	for(i=1; i<=n-2; i++)
	{
		nt = ft + st;
		printf("%d,\t", nt);
		ft = st; 
		st = nt;
		
	}

	getch();
	}

