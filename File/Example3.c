/*
WAP to continuously read name, age and salary of a worker and write it into a file until user 
confirms to end. Then read n from user and display the nth record in the file. Details of worker 
must be represented by a structure.
*/
#include <stdio.h>
#include<conio.h>
#include<process.h>
struct Worker
{
	char name[20];
	int age;
	float salary;
};

void main( )
{
	struct Worker emp[10],e[10];
	char next[3];
	int n, i=0,m;
	FILE *fp,*fptr;
	fp = fopen("WORKER.txt", "w");
	printf("Enter information of students:\n");
	do
	{
		printf("Name: ");
		scanf("%s",emp[i].name);
		printf( "Age: ");
		scanf("%d", &emp[i].age);
		printf("Salary: ");
		scanf("%f", &emp[i].salary);
		fwrite(&emp[i],sizeof(emp[i]),1,fp);
		printf("If you  want to enter more data , please confirm 'yes': ");
		fflush(stdin);
		scanf("%s", next);
		i++;
	}while(stricmp(next, "yes")==0);
	
	
	fclose(fp);
	fp=fopen("WORKER.txt","r");
	fread(e,sizeof(e[0]),i,fp);
	printf("Enter record number you want to display : ");
	scanf("%d", &n);
	
	printf("\nThe information of a Employee:\n");
	printf("\nName\t Age \t Salary:\n");
	printf(".............................:\n");
	printf("%s\t %d \t\t %.2f\n",e[n-1].name,e[n-1].age,e[n-1].salary);
	
	fclose(fptr);

	getch();

}
