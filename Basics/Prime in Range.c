#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2, i, count = 0,j;
	printf("Enter Range");
	scanf("%d %d", &n1, &n2);
	for(j= n1; j<= n2; j++)
	{
	count = 0;
	
	for(i=1; i<=j; i++)
	{
		if(j %i ==0)
		{
			count++;
		}
	}
	if(count == 2)
	{
		printf("%d\t",j);
	}
}

	getch();
}
