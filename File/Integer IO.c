#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
	FILE *fp;
	int i,n,num[10],onum[10];
	fp=fopen("d:\\Files\\abc.txt","w");
	if(fp == NULL)
	{
		printf("Error");
		exit(1);
	}
	
	printf("Enter how many Numbers:");
	scanf("%d",&n);
	printf("Enter %d Numbers:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		putw(num[i],fp);
	}
	fclose(fp);
	
	fp=fopen("d:\\Files\\abc.txt","r");
	printf("Reading From files.......\n");
	printf("Contents of file.......\n");
	
	for(i=0;i<n;i++)
	{
		onum[i]=getw(fp);
		printf("%d\t",onum[i]);
	}
	
	fclose(fp);

}
