#include<stdio.h>
#include<conio.h>
void main()
{
	int (*Mat)[10],i,j;// int mat[10][10]

	for(i=0; i< 3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", (*(Mat+i)+j));
		}
	}
}


	
	
	

