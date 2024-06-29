#include<stdio.h>
#include<conio.h>
int isStrong(int);
int FindMax(int);
void main()
{
	int num, str,max;
	printf("Enter a num:");
	scanf("%d",&num);
	str = isStrong(num);
	if(num == str)
	{
		printf("%d is Strong Number.\n",num);
		max= FindMax(str);	
		printf("Max digit in %d is %d",num,max);			
	}
	else
	{
		printf("%d is Not Strong Number.\n",num);		
	}	
	getch();
}

int isStrong(int num)
{
	int rem, fact,sum=0,i;
	while(num!=0)
	{
		rem = num %10;
		fact =1;
		for(i=1; i<=rem ;i++)
		{
			fact = fact *i;
		}
		sum= sum + fact;
		num = num /10;
		
	}	
	return (sum);	
}
	

int FindMax(int num)
{
	int i, max,rem;
	max=num %10;
	while(num!=0)
	{
		rem = num %10;
		max = (max>rem)? max:rem;
		num = num/10;
	}
	
	return(max);
}


