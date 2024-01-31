#include<stdio.h>
int main()
{
	int n =151;
	int temp=n;
	int p=0;
	
	while (n>0){
		int rem =n %10;
		p=(p)+(rem*rem*rem);
		n=n/10;
	} 
if (temp==p) {
	printf("Yes it is an Armstrong num.");
} else{
	printf("it is not an armstong num.");
}
return 0;
}