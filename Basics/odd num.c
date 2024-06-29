#include<stdio.h>
#include<conio.h>
void main()
{
	int n, i;
	printf("Enter a num");
	scanf("%d", &n);
	for( i = 0; i <= n; i++)
	{
		if(i%2==0)
			continue;
		else
			printf("%d\t",i);	
	}
}

