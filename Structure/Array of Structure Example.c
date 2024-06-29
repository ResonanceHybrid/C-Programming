#include<stdio.h>
#include<conio.h>
struct Student
{
	char Name[20];
	int Roll;
	float mark;
} ;

struct Student S[10];

void main()
{
	int i,n;
	printf("Enter how many Students?\n");
	scanf("%d",&n);
	printf("Enter information of %d Students\n",n);
	for(i=0; i<n; i++)
	{
		printf("Enter name of a students:\n");
		fflush(stdin);
		gets(S[i].Name);
		printf("Enter Roll No. of a students:\n");
		scanf("%d",&S[i].Roll);
		printf("Enter Marks of a students:\n");
		scanf("%f",&S[i].mark);
	}

	printf("\nThe information of a Student:\n");
	printf("\nName\t Roll No. \t Mark:\n");
	printf(".............................:\n");
	for(i=0; i<n; i++)
	{
		printf("%s\t %d \t\t %.2f\n",S[i].Name,S[i].Roll,S[i].mark);
	}
	
	getch();
}


