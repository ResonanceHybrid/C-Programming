#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],  row,col, i,j,s=0,p=0,min=0,max=0;
	printf("Enter Row and Column:");
	scanf("%d %d",&row, &col);

	printf("Enter elements of Mat1:\n");
	for(i=0; i< row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Matrix:\n");
	for(i=0; i< row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	
	
	for(i=0; i< row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(min>a[i][j]){
				min=a[i][j];
			}else{
				max=a[i][j];
			}
		}
	}
	printf("Minimim value = %d\n",min);
	printf("Maximum value = %d\n",max);
		
	for(i=0; i< row; i++)
	{
		for(j=0; j<col; j++){
		
			if(i==j){
				
				s=s+a[i][j];
			//	break;
			}if(i+j==j+i){
				p=p+a[i][j];
			//	break;
			}
		}
	}
	printf("Sum of first diagonal = %d",s);
	printf("Sum of second diagonal = %d",p);
	
			
	return 0;
}
	
	
	

