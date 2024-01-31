#include<stdio.h>
int main()
{
	double num;
	printf("Enter a number");
	scanf("%d",&num);
	if(num<0)
	printf("you entered a negative number");
	else if(num>0)
	printf("Enterd an positive number");
	return 0;
}