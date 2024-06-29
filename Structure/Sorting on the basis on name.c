#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Employee
{
	char Name[20];
	char add[20];
	char num[10];
} ;

struct Employee emp[20], temp;

void main()
{
	int n, i, j;
	printf("Enter how many employee:\n");
	scanf("%d",&n);
	printf("Enter info of %d Employee\n",n);
	for(i=0; i<n; i++)
	{
		printf("Enter name of a Employee:\n");
		fflush(stdin);
		gets(emp[i].Name);
		printf("Enter address of a Employee:\n");
		fflush(stdin);
		gets(emp[i].add);
		printf("Enter Phone number of a Employee:\n");
		fflush(stdin);
		gets(emp[i].num);
	}
	
	for(i=0; i< n-1; i++)
	{
		for( j=0; j< n-i-1; j++)
		{
			if((stricmp(emp[j].Name, emp[j+1].Name)) > 0)
			{
				temp = emp[j];
				emp[j]= emp[j+1];
				emp[j+1]= temp;
			}
		}
	}


	printf("\nThe information of a Employee:\n");
	printf("\nName\t Address \t Phone Number:\n");
	printf(".............................:\n");

	for(i=0; i<n; i++)
	{
			printf("%s\t %s \t\t %s\n",emp[i].Name,emp[i].add,emp[i].num);
	}
	

	getch();
}


