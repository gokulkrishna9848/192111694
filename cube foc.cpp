#include<stdio.h>
#include<conio.h>
int cube(int);
int main()
{
	int x,n;
	printf("Enter the nth element:");
	scanf("%d",&n);
	for(x=1;x<=n;x++)
	printf("%d",cube(x));
	printf("\n");
	getch();
	
}
int cube(int y)
{
	return y*y*y;
}