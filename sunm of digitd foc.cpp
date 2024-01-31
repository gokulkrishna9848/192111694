#include<stdio.h>
#include<conio.h>
int n,t,sum=0,remainder;
int main(){
printf("Enter an integer\n");
scanf("%d",&n);
t=n;
while (t!=0)
{
	remainder=t%10;
	sum=sum+remainder;
	t=t/10;
}
printf("sum of digits of %d=%d\n",n,sum);
return 0;
}