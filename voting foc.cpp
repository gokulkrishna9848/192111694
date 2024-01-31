#include<stdio.h>
#include<conio.h>
int  main()
{
	int age;
	printf("Enter the ade of a person:");
	scanf("%d",&age);
	if(age<17)
	printf("\n person is not eligible for voting");
	else if(age>=18)
	printf("\n person is eligible for voting");
    getch();
}