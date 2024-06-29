#include<stdio.h>
#include<conio.h>
struct Student
{
	char Name[20];
	char sub[10][20];
	int Roll;
	float mark[10];
} ;

struct Student S;

void main()
{
	int i, n;
	printf("Enter name of a students:\n");
	gets(S.Name);
	printf("Enter Roll No. of a students:\n");
	scanf("%d",&S.Roll);
	printf("How many subjects:\n");
	fflush(stdin);
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("Enter Name of Subject [%d]:\n",i);
		fflush(stdin);
		gets(S.sub[i]);
		printf("Enter Marks of Subject [%d]:\n",i);
		scanf("%f",&S.mark[i]);	
	}

	printf("\n\nThe information of a Student\n\n");
	printf(".................................\n");
	printf("Name: %s\nRoll: %d \n",S.Name,S.Roll);
	printf("--------------------------------\n");
	printf("Subject Name\t Obtain Mark\n ");
	printf("--------------------------------\n");
	for(i=0; i<n; i++)
	{
		printf("%s\t\t  %.2f\n",S.sub[i],S.mark[i]);
	
	}
	getch();
}


