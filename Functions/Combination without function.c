// Combination
#include<stdio.h>
#include<conio.h>
void main()
{
	int n, r, i,nf=1,rf=1,nrf=1;
	float cnr;
	printf("Enter value of n and r");
	scanf("%d %d",&n, &r);
	for(i=1; i<=n;i++)
	{
		nf = nf*i;
	}
	for(i=1; i<=r;i++)
	{
		rf = rf*i;
	}
	
	for(i=1; i<=(n-r);i++)
	{
		nrf = nrf*i;
	}
	c= (float)nf/(rf*nrf);
	printf("C= %f",c);
	getch();
	
}
