#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   int i,n, fact,j,k=0; 
   float sum=0, term,x;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter x:");
    scanf("%f",&x);
    for(i=1;i<((2*n+1));i+=2)
    {
		
		printf("\t%d",i);
		fact = 1;
    	for(j=1;j<=i;j++)
    	{
    		fact = fact*j;
		}
		term = pow(-1,k)*pow(x,i)/fact;		 
		sum = sum + term ;  
		k++; 

    }
 printf("\nSin(%.0f rad) = %.2f ",x,sum);
}
