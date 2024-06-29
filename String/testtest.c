#include <string.h>
#include <math.h>
#include<stdio.h>


int main() 
{
    char ch;
    char a[30],b[30];
    fflush(stdin);
    scanf("%c\n",&ch);
    fflush(stdin);
    gets(a);
    fflush(stdin);
    gets(b);
    printf("%c",ch);
    puts(a);
    printf("%s\n",b);
    getch();
}
