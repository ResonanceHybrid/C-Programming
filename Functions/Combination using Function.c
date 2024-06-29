// Combination
#include<stdio.h>
#include<conio.h>
int fact(int); //Function Declaration OR Prototype Definatiion
void main()
{
	int n, r,nf,rf,nrf;
	float cnr;
	printf("Enter value of n and r");
	scanf("%d %d",&n, &r);
	nf = fact(n );
	rf = fact(r);
	nrf =fact(n-r);
	cnr= (float)nf/(rf*nrf);
	printf("C= %0.2f",cnr);
	getch();
	
}

int fact(int n)
{
	int fact=1,i;
	for(i=1; i<=n;i++)
	{
		fact = fact*i;
	}
	return(fact);
//	return(x);
}
