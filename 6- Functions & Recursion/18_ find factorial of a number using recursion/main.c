/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.08.10
 * Date Started : 2022.08.10
 * Topic        : 18. C program to find factorial of a number using recursion
 *********************************************/
 
#include <stdio.h>



int fact(int num);


int main()
{
	int num, factorial;
	
	
	printf("Please enter a number to get its factorial using recursion: ");
	fflush(stdout);
	scanf("%d", &num);
	
	factorial = fact(num);
	
	printf("The factorial of %d is: %d", num, factorial);
	
	
	return 0;
}

int fact(int num)
{
	if(num==0)
		return 1;
	else if(num==1)
		return 1;
	else
		return num * fact(num-1);
}
