#include<stdio.h>
#include<conio.h>
int hcf(int, int);
int lcm(int, int);
void main()
{
	int num1, num2, h,l;
	printf("Enter two num:");
	scanf("%d %d",&num1, &num2);
	h = hcf(num1, num2);
	l= lcm(num1, num2);
	printf("Hcf = %d\nLcm = %d",h,l);
	getch();
}
int hcf(int n1, int n2)
{
	int min, h,i;
	min = n1<n2?n1:n2;
	for(i=min; i>=1; i--)
	{
		if(n1%i==0 && n2%i==0)
		{
			h=i;
			return(h);
			//break;
		}
	}
//	return(h);
	
}

int lcm(int n1, int n2)
{
	int l;
	l= n1*n2/hcf(n1, n2);
	return (l);
}


