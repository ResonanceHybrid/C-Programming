#include<stdio.h>

void main(){
	int matA[100][100],matB[100][100],i,j;
	int r1,c1,r2,c2;
	
	printf("enter the order of the 1st matrix :");
	scanf("%d %d",&r1,&c1);
	printf("Enter the elements of first matrix :");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&matA[i][j]);
		}
	}
	
	printf("Enter the order  of 2nd matrix :");
	scanf("%d %d",&r2,&c2);
	printf("Enter the elements of 2nd matrix :");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			scanf("%d",&matB[i][j]);
		}
	}
	if(c1==r2){
	result(matA,matB,r1,c2);
}else{
	printf("Calculation cannot be done");
}
}
	
void result(int matA[100][100],int matB[100][100],int r1,int c2 ){
	int i,j,c1,r2,k;int matC[100][100];
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				//matC[i][j]=0;
				for(k=0;k<2;k++){
				
				matC[i][j]=matC[i][j]+matA[i][k]*matB[k][j];
			}
		}
	printf("The product of matrix is :\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf("\t%d",matC[i][j]);
		}
		printf("\n");
		}
	}
}

