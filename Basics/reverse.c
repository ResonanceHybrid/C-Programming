#include<stdio.h>
#include<conio.h>
void main()
{
	int num, rem, rev = 0, temp;
	printf("Enter a num");
	scanf("%d", &num);
	temp = num;
	
	rem = num %10;
	rev = rev * 10 + rem;
	num = num/10;
	
	rem = num %10;
	rev = rev * 10 + rem;
	num = num/10;
	
	rem = num %10;
	rev = rev * 10 + rem;
	num = num/10;
	
	printf("Forward order is : %d\n Reverse is %d",temp,rev);
	getch();
	
}
