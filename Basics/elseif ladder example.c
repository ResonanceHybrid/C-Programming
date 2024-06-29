
#include<stdio.h>
#include<conio.h>

void main()
{
	float per;
	printf("Enter percentage");
	scanf("%f", &per);
	if(per >=80)
	{
		printf("Dist");
	}
	else if( per >=65 && per<80)
	{
			printf("First");
	}
	else if( per <65 && per>= 40)
	{
			printf("pass");
	}
	else{
			printf("Fail");
	}

  getch();
}


