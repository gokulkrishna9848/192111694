#include<stdio.h>
int main()
{
	char Operator;
	 float num1,num2,result =0;
	 printf("Enter any operator like +,-,*,/");
	 scanf("%c",&Operator);
	 printf("Enter the value of operands num1 and num2");
	 scanf("%f%f",&num1,&num2);
	 switch(Operator)
	 {
	 	case '+': result = num1 +num2;
	 	break;
	 	case '-': result =num1-num2;
	 	break;
	 	case '*': result =num1*num2;
	 	break;
	 	case '/': result =num1/num2;
	 	break;
	 	default: printf("/invalid Operator");
	 }
	 printf("The value =%f",result);
	 return 0;
}