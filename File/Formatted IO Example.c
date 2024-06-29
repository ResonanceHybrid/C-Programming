/*
Wap to create a file names student.txt in D:\ and write Name, Roll, Address and Marks of a student
to a File. Again read the contents of a file and display from monitor.
*/

#include<conio.h>
#include<stdio.h>
#include<process.h>
void main()
{
	char name[100],add[100];
	int roll;
	float mark;
	FILE *fp, *fptr;
	fp = fopen("d:\\Files\\Student.txt","w");
	if(fp == NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("Enter a Name: ");
	fflush(stdin);
	gets(name);
	printf("Enter a Address: ");
	fflush(stdin);
	gets(add);
	printf("Enter roll No.: ");
	scanf("%d",&roll);
	printf("Enter Mark: ");
	scanf("%f",&mark);

	printf("\nWriting to file......\n");
	fprintf(fp,"%s %s %d %f",name,add,roll,mark);
	fclose(fp);
	
	fptr = fopen("d:\\Files\\Student.txt","r");
	if(fptr == NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("Reading From File......\n");
	fscanf(fptr,"%s %s %d %f",name,add,&roll,&mark);
	printf("\nContents of file Test.txt is:\n");
	printf("Name = %s\nAddress = %s\nRoll No = %d\nMark= %.2f",name,add,roll,mark);
	fclose(fptr);

}
