#include<stdio.h>
#include<conio.h>
struct Student
{
	char Name[20];
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
		printf("Enter Marks of Subject [%d]:\n",i);
		scanf("%f",&S.mark[i]);	
	}

	printf("\nThe information of a Student:\n");
	printf(".............................:\n");
	printf("Name: %s\nRoll: %d \n",S.Name,S.Roll);
	for(i=0; i<n; i++)
	{
		printf("Marks of Sub[%d]: %.2f\n",i,S.mark[i]);
	}
	getch();
}


