#include<stdio.h>
#include<conio.h>
void main()
{
	int max, min, num;
	char ch;
	printf("Enter a Num:");
	scanf("%d",&num);
	printf("Press y to continue");
	fflush(stdin);
	ch = getchar();
	min = max=num;
	while(ch == 'y')
	{
		printf("Enter a Num:");
		scanf("%d",&num);
		max=(num>max)? num:max;
		min=(num<min)?num:min;
		printf("Press y to continue");
		fflush(stdin);
		ch = getchar();
	}
	printf("Max= %d\nMin = %d",max,min);
	getch();
}
