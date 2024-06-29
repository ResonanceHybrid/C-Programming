#include<stdio.h>
#include<conio.h>
void main()
{
	int Mat[3][3],row=3,col=3,i,j;
	printf("Enter elements of 3 X 3 mtrix");
	for(i=0; i< row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d", &Mat[i][j]);
		}
	}
	
	printf("Elements of 3 X 3 mtrix are \n");
	for(i=0; i< row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d\t", Mat[i][j]);
		}
		printf("\n");
	}
}
