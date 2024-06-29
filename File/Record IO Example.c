/*
Wap to create a  structure name Student with its member name, add, roll, mark. Use this Structure
to read information of a student and write its contents to a File Student.txt. Again read the 
contents of a file and display from monitor.
*/

#include<conio.h>
#include<stdio.h>
#include<process.h>
struct Student
{
	char name[100];
	char add[100];
	int roll;
	float mark;
};
void main()
{

	FILE *fp, *fptr;
	struct Student s1,s2;
	fp = fopen("d:\\Files\\Student.txt","w");
	if(fp == NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("Enter a Name: ");
	fflush(stdin);
	gets(s1.name);
	printf("Enter a Address: ");
	fflush(stdin);
	gets(s1.add);
	printf("Enter roll No.: ");
	scanf("%d",&s1.roll);
	printf("Enter Mark: ");
	scanf("%f",&s1.mark);
/*	fp = fopen("d:\\Files\\Student.txt","w");
	if(fp == NULL)
	{
		printf("Error");
		exit(1);
	}
	*/
	printf("\nWriting to file......\n");
	fwrite(&s1,sizeof(s1),1,fp);
	fclose(fp);
	
	fptr = fopen("d:\\Files\\Student.txt","r");
	if(fptr == NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("Reading From File......\n");
	fread(&s2,sizeof(s2),1,fptr);
	printf("\nContents of file Test.txt is:\n");
	printf("Name = %s\nAddress = %s\nRoll No = %d\nMark= %.2f",s2.name,s2.add,s2.roll,s2.mark);
	fclose(fptr);

}
