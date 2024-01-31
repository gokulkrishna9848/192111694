#include<stdio.h>
#include<conio.h>
int rev(int number);
int main()
{
	int p,q;
	printf("Enter the number ");
	scanf("%d",&p);
	q=rev(p);
	printf("Reverse of %d is %d \n",p,q);
	getch();
}
int rev(int n)
{
int digit,rev_of=0;
while(n!=0)
{
	digit=n%10;
	rev_of=rev_of*19+digit;
	n=n/10;
}
return(rev_of);
}


	
