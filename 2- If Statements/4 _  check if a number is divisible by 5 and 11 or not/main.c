/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.22
 * Topic        : C program to check whether a number is divisible by 5 and 11 or not.
 *********************************************/


#include <stdio.h>

int main()
{
	int number;
	
	printf("Input number: ");
	fflush(stdout);
	scanf("%d", &number);
	
	if((number % 5 == 0) && (number % 11 == 0))
	{
		printf("The number is divisible by both 5 and 11");
	}
	else
	{
		printf("The number is not divisible by (one of) or (both) 5 and 11");
	}
	
	return 0;
}