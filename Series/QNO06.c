#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,fact,j;
    float sum=0,term;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact = 1;
        for(j=1; j<=i; j++)
        {
        	fact = fact * j;
		}
		term =fact/i;
        sum = sum + term;

    }
    printf("Sum = %f ",sum);

}

