/*
Wap to create a  structure name Student with its member name, add, roll, mark. Use this Structure
to read information of n student and write its contents to a File Student.txt. 
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
	struct STUDENT std[5];
	int i,n;
	FILE *fp;
//	fp = fopen("d:\\Files\\STUDENT.txt", "w");
	printf("Enter how many Students?");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("Name: ");
		scanf("%s",std[i].name);
		printf( "Roll: ");
		scanf("%d", &std[i].rollno);
		printf("Age: ");
		scanf("%d", &std[i].age);
	//	fwrite(&std[i],sizeof(std[i]),1,fp);
	}
	fp = fopen("d:\\Files\\STUDENT.txt", "w");
	fwrite(std,sizeof(std[0]),n,fp);
	printf("\nWriting to file......\n");
	fclose(fp);
	getch();
	
}
