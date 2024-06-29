#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,term,sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        term =i;
        sum = sum + term;

    }
    printf("Sum = %d ",sum);

}

