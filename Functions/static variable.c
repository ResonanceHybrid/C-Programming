#include<stdio.h>
#include<conio.h>
void AA();
void main()
{
	AA();
	AA();
	AA();
	AA();
	AA();
	getch();
}

void AA()
{
	static int a=10;
	printf("a = %d\n",a);
	a = a+10;	
	
}
