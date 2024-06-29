#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   int i,n;
   float sum=0, term;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    			
		term = pow(-1,i+1)*(float)i/(i+1);
		sum = sum + term    ;   

    }
 printf("Sum = %f ",sum);
}
