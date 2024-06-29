#include<stdio.h>
#include<conio.h>
#include<math.h>
int Arm(int);

void main()
{
	int num,A;
	printf("Enter No. of terms:");
	scanf("%d",&num);
	A=Arm(num);
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

int Arm(int n)
{
	if(n ==0)
	{
		return 0;
	}
	else
	{
		return(pow(n%10,3) + Arm(n/10));
	}
}


