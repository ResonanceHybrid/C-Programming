#include<stdio.h>
#include<conio.h>
struct Height
{
	int ft; 
	int inch;
} ;

struct Height h1, h2, sum;

void main()
{
	int i, n;
	printf("Enter height of a person: ft and inch\n");
	scanf("%d %d",&h1.ft, &h1.inch);
	printf("Enter height of another person: ft and inch\n");
	scanf("%d %d",&h2.ft, &h2.inch);
	sum.ft = h1.ft + h2.ft;
	sum.inch =  h1.inch + h2.inch;
	if(sum.inch>=12)
	{
		sum.inch = sum.inch -12;
		sum.ft = sum.ft +1;
	}
	printf("Sum of heights is: %d ft and %d inch",sum.ft, sum.inch);


	getch();
}


