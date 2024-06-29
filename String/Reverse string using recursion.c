/* C Program to Reverse String using Recursion */


#include <stdio.h>
#include <string.h>
#include<conio.h>
 
void reverse(char [], int);
int main()
{
    char txt[20];
 
    printf("Enter a string to reverse: ");
    gets(txt);

    reverse(txt, 0);
    printf("The string after reversing is: %s\n", txt);
    return 0;
}
 
void reverse(char str[], int i)
{
    char temp;
    int len;
    len = strlen(str);
    if (i == len / 2)
    {
        return;
    }
    temp = str[i];
    str[i] = str[len-i -1];
    str[len-i -1] = temp;

    reverse(str, i + 1);
}
