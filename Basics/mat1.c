#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	n=5;
	for(i=1;i<=n; i++)
	{
		for(j=1; j<=n;j++)
		{
			//if(i>=j && i+j>=6)
			//{
				printf(" %d ",i);
			//}
			//else
			//{
			//	printf("   ");
			//}
		}
		printf("\n");
	}
	
	getch();
}
