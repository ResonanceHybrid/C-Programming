#include <stdio.h>
#include <string.h>
int main(){
	int n,i;
	printf("Enter range: ");
	scanf("%d",&n);
	int x=series(i);
		printf("%d",x);
	return 0;
		
}
int series(int n){
	if(n==1){
		return 1;
	}if(n==2){
		return((series(n*10))+series(n-1));
	}
}

