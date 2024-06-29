#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   long int i,n, sum=0, term;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	term = pow(i,2);
		sum = sum + term    ;   

    }
 printf("Sum = %ld ",sum);
}
