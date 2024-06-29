#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	printf ("Enter Alphaber: "); // A  B   d   e
//	ch = getchar();
	//or
	scanf(" %c", &ch); // b
	if ( ch >=65 && ch <= 90)// T
	{
		printf("The entered Alphabet is in Upper case:\n");
		ch = ch + 32; // 65 + 32 = 97
		printf("Its Lower case Alphabet is : %c\n", ch);	
	}
	else if ( ch >=97 && ch <= 122)
	{
		printf("The entered Alphabet is in Lower case:\n");
		ch = ch - 32;  // 98-32==66
		printf("Its Upper case Alphabet is : %c", ch);	
	}
	else
	{
		printf("Please Enter Valid Alphabet:\n");
	}
	getch();	
}
