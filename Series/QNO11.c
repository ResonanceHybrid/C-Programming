#include<stdio.h>
#include<conio.h>
void main()
{
    int a=2,i,n;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        a+=13*i;
    }

}

