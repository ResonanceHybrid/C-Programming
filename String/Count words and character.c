#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[100];
	int wcount = 0, chcount = 0, i;
	printf("Enter the string : ");
	scanf("%[^\n]", str);
	i = 0;
	while(str[i]!='\0')
	{
		if(str[i] == ' ')
		{
			wcount++;
		}
			chcount++;
		i++;
		}
	printf("No of words in given sentence is %d\n", wcount+1);
	printf("No of character in given sentence is %d", chcount);
	getch();
return 0;
}
