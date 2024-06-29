#include<stdio.h>
#include<conio.h>
void main()
{
    int a=1, b=3, c=4, n, sum, i;
    printf("Enter n:");
    scanf("%d",&n);
    printf("%d %d ",a,b,c);
    for(i=4; i<=n; i++)
    {
        sum = a+b+c;
        printf("%d ",sum);
      a = b;
      b = c;
      c = sum;
    }

}

