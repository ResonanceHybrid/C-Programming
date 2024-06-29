#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Employee
{
	char Name[20];
	char add[20];
	char num[10];
} ;

void Read(struct Employee emp[20], int n)
{
	int i;
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
}



void Display(struct Employee emp[20], int n)
{
	int i;
	printf("\nName\t Address \t Phone Number:\n");
	printf(".............................:\n");

	for(i=0; i<n; i++)
	{
			if((stricmp(emp[i].add,"kathmandu"))==0)
				printf("%s\t %s \t\t %s\n",emp[i].Name,emp[i].add,emp[i].num);
	}
}

void main()
{
	struct Employee emp[20];
	int n;
	printf("Enter how many employee:\n");
	scanf("%d",&n);
	printf("Enter info of %d Employee\n",n);
	Read(emp,n);
	printf("\nThe information of a Employee having address kathmandu:\n");
	Display(emp,n);
	getch();
}


