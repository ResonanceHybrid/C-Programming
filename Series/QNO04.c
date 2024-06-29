#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,term,sum=0,fact,j;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact = 1;
        for(j=1; j<=i; j++)
        {
        	fact = fact * j;
		}
		term =fact;
        sum = sum + term;

    }
    printf("Sum = %d ",sum);

}

