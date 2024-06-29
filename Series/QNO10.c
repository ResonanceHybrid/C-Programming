#include<stdio.h>
#include<conio.h>
void main()
{
    int a=1,b=2,i,n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("%d %d ",a, b);
    for(i=1;i<=n-2;i++)
    {
        if(i%2==1)
        {
            a=a*3;
            printf("%d ",a);
        }
        else
        {
            b=b*3;
            printf("%d ",b);
        }
    }

}

