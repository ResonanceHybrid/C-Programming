#include<stdio.h>
#include<conio.h>
struct DOB
{
	int day;
	int month;
	int year;
};

struct Student
{
	char Name[20];
	int Roll;
	float mark;
	struct DOB bb;
} ;

struct Student S;

void main()
{
	printf("Enter name of a students:\n");
	gets(S.Name);
	printf("Enter Roll No. of a students:\n");
	scanf("%d",&S.Roll);
	printf("Enter Marks of a students:\n");
	scanf("%f",&S.mark);
	
	printf("Enter DOB of a students in dd:mm:yy Format:\n");
	scanf("%d %d %d",&S.bb.day,&S.bb.month,&S.bb.year);	
	
	printf("\nThe information of a Student:\n");
	printf("\nName\t Roll No. \t Mark    \t\Date of Birth\n");
	printf(".........................................................:\n");
	printf("%s\t %d \t\t %.2f\t  \t %d: %d: %d \n",S.Name,S.Roll,S.mark,S.bb.day,S.bb.month,S.bb.year);
	getch();
}


