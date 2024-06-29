#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   int i,n, fact,j; 
   float sum=0, term,x;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter x:");
    scanf("%f",&x);
    for(i=0;i<n;i++)
    {
    	fact = 1;
    	for(j=1;j<=i;j++)
    	{
    		fact = fact*j;
		}
		term = pow(x,i)/fact;
    
		sum = sum + term ;   

    }
 printf("exp(%.0f) = %.2f ",x,sum);
}
