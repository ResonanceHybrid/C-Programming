#include<stdio.h>
#include<conio.h>
struct Student
{
	char Name[20];
	int Roll;
	float mark;
} ;

void Display(struct Student std)
{
	printf("\nName\t Roll No. \t Mark:\n");
	printf(".............................:\n");
	printf("%s\t %d \t\t %.2f\n",std.Name,std.Roll,std.mark);
}

void main()
{
	struct Student S;
	printf("Enter name of a students:\n");
	gets(S.Name);
	printf("Enter Roll No. of a students:\n");
	scanf("%d",&S.Roll);
	printf("Enter Marks of a students:\n");
	scanf("%f",&S.mark);
	printf("\nThe information of a Student:\n");
	Display(S);
	getch();
}


