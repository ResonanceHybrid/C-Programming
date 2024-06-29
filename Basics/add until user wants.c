#include<stdio.h>
#include<conio.h>
void main()
{
	float num, sum=0.0;
	char ch;
	do{
		printf("Enter a num: ");
		scanf("%f", &num);
		sum = sum + num;
		printf("Press y to continue:");
		fflush(stdin);
		ch = getchar();
		
	  }while(ch=='y');
	  printf("Sum = %.2f:",sum);
	  getch();
	
	
}
