#include<stdio.h>
#include<conio.h>
struct Date
{
	int day; 
	int month;
	int year;
} ;

struct Date ad, bs;

void main()
{

	printf("Enter Date in AD: year, months and day\n");
	scanf("%d %d %d",&ad.year, &ad.month, &ad.day);
	bs.year = ad.year + 56;
	bs.month = ad.month + 8;
	bs.day = ad.day + 16;
	if(bs.day>=30)
	{
		bs.day = bs.day-30;
		bs.month = bs.month +1;
	}
	if(bs.month>=12)
	{
		bs.month = bs.month-12;
		bs.year = bs.year +1;
	}

	printf("%d : %d : %d AD = %d : %d: %d BS",ad.year, ad.month, ad.day,bs.year, bs.month, bs.day);


	getch();
}


