				/*year %4==0 ---- leap year
				
				leap year
				
	centuary years				non- centuary yrs
	
year % 100 ==0						year %4 ==0 

year % 400==0  */

#include<stdio.h>
#include<conio.h>

void main()
{
	int year;
	printf("Enter a year");
	scanf("%d", &year);

  if( (year %400==0)  ||  (( year %100!=0) && (year % 4==0)  ) )
  {
  	printf("Leap year");
  }else
  {
  	printf("Not Leap year");
  }
  getch();
}


