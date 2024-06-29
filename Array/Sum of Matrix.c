#include<stdio.h>
#include<conio.h>
int row=2,col=2,i,j,x;
void main(){
	int a[3][3],b[3][3];
	input(a,b);
	x = sum(a,b);
	display(a,b,x);
	return 0;
}
int input(int a[3][3],int b[3][3]){
	printf("Enter elements of Mat1:\n");
	for(i=0; i< row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Enter elements of Mat2:\n");
	for(i=0; i< row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	return 0;
}
int sum(int a[3][3],int b[3][3]){
	int c[3][3];
	for(i=0; i< row; i++)
	{
		for(j=0; j<col; j++)
		{
			c[i][j]= a[i][j] + b[i][j];
		}
	}
	return c;
	
}
int display(int a[3][3],int b[3][3],int c[3][3]){
	printf("Sum of Matrix is: \n");
	for(i=0; i< row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
