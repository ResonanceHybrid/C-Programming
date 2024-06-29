/*
Wap to create a  structure name Student with its member name, rollno and age. Use this Structure
to read information of n student and write its contents to a File Student.txt. Again read the 
contents of a file sort them in ascending order of their name and display from monitor.
*/
#include <stdio.h>
#include<conio.h>
#include<process.h>
struct STUDENT
{
	char name[20];
	int rollno;
	int age;
};
void main( )
{
	struct STUDENT std[5],s[5], temp;
	int i,j,n;
	FILE *fp, *fptr;
//	fp = fopen("d:\\Files\\STUDENT.txt", "w");
	printf("Enter how many Students?");
	scanf("%d",&n);
	printf("Enter information of %d students:\n",n);
	for(i=0; i<n; i++)
	{
		printf("Name: ");
		scanf("%s",std[i].name);
		printf( "Roll: ");
		scanf("%d", &std[i].rollno);
		printf("Age: ");
		scanf("%d", &std[i].age);
	}
	fp = fopen("d:\\Files\\STUDENT.txt", "w");
	if(fp == NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("\nWriting to file......\n");
	fwrite(std,sizeof(std[0]),n,fp);
	fclose(fp);
	
	fptr = fopen("d:\\Files\\Student.txt","r");
	if(fptr == NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("Reading From File......\n");
	fread(s,sizeof(s[0]),n,fptr);
	
	for(i=0; i< n-1; i++)
	{
		for( j=0; j< n-i-1; j++)
		{
			if((stricmp(s[j].name, s[j+1].name)) > 0)
			{
				temp = s[j];
				s[j]= s[j+1];
				s[j+1]= temp;
			}
		}
	}
	printf("\nThe information of a Employee:\n");
	printf("\nName\t Roll No \t Age:\n");
	printf(".............................:\n");

	for(i=0; i<n; i++)
	{
			printf("%s\t %d \t\t %d\n",s[i].name,s[i].rollno,s[i].age);
	}
	fclose(fptr);
	
	getch();
	
}
