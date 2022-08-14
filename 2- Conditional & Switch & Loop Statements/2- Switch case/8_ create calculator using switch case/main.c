/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.22
 * Topic        : C program to create calculator using switch case ( + - * / )
 *********************************************/
 
 
#include <stdio.h>


int main()
{
	float op1, op2; /*operands*/
	float res;
	char operator;
	int invalidOpFlag=0;
	
	
	printf("Enter [Operand 1] [Operator (+ , -, *, /)] [Operand 2]: \n");
	fflush(stdout);
	scanf("%f %c %f", &op1, &operator, &op2);
	
	switch(operator)
	{
		case '+': 
					res= op1 + op2;
					break;
		
		case '-':	res= op1 - op2;
					break;
					
		case '*':	res= op1 * op2;
					break;
					
		case '/':	res= op1 / op2;
					break;
					
		default :	printf(" Please Enter a valid operator");
					invalidOpFlag=1;
	}
	
	if(invalidOpFlag==0)
	{
		printf("%.2f %c %.2f = %.2f",op1,operator,op2,res);
	}
	return 0;
}