#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[50];
	printf("Enter the string:");
	gets (str);
	printf("The length of the string is:%d",strlen(str));
	getch();

}