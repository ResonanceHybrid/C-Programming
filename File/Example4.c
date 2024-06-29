/*
Write a C program to read n numbers from a user and write it to files num.txt. Again read the contents
from that file and write even numbers to even.txt file and  odd numbers to odd.txt file.
*/
#include <stdio.h>
#include<conio.h>
#include<process.h>

void main()
 {
	FILE *fp, *efp, *ofp;
	int n, i, num;

	fp = fopen("d:\\Files\\num.txt", "w");
	if(fp == NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("Enter the value for n:");
	
	scanf("%d", &n);
	printf("Enter %d Numbers:\n",n);
	for (i = 0; i <n; i++)
	{
		scanf("%d",&num);
		fprintf(fp,"%d ",num);		
	}
	fclose(fp);
	
	fp = fopen("d:\\Files\\num.txt", "r");
	efp = fopen("d:\\Files\\even.txt", "w");
	ofp = fopen("d:\\Files\\odd.txt", "w");
	
	
	for (i = 0; i <n; i++)
	{
		fscanf(fp,"%d ",&num);
		if(num %2==0)
		{
			fprintf(efp,"%d ",num);	
		
		}	
		else
		{
			fprintf(ofp,"%d ",num);	
		}	
	}
	
	fclose(efp);
	fclose(ofp);
	fclose(fp);
	
}
