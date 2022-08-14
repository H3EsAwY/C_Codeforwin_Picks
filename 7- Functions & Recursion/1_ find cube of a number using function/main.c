/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.08.10
 * Date Started : 2022.08.10
 * Topic        : C program to find cube of a number using function
 *********************************************/

#include <stdio.h>

/*Function Prototype*/
int getCube(int num);

int main()
{
	int num;
	
	
	printf("Please enter a number to find its cube using functions: ");
	fflush(stdout);
	scanf("%d",&num);
	
	printf("The cube of %d is: %d", num, getCube(num));


	return 0;
}

/*Function Definition*/
int getCube(int num)
{
	int numCubed;
	
	numCubed = num * num * num;
	
	
	return numCubed;
}
