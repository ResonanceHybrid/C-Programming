#include<stdio.h>
#include<conio.h>
#include<math.h>
int Arm(int, int);

void main()
{
	int num,A,c=0,n;
	printf("Enter No. of terms:");
	scanf("%d",&num);
	n= num;
	while(n!=0)
	{
		c++;
		n=n/10;
	}
	A=Arm(num,c);
	if(A == num)
	{
		printf("%d is Armstrong Number",num);
	}
	else
	{
		printf("%d is Not Armstrong Number",num);	
	}	
	getch();
}

int Arm(int n, int c)
{
	if(n ==0)
	{
		return 0;
	}
	else
	{
		return(pow(n%10,c) + Arm(n/10,c));
	}
}


