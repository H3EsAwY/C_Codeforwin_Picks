/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.08.10
 * Date Started : 2022.08.10
 * Topic        : 11. C program to print all natural numbers from 1 to n using recursion
 *********************************************/
 
 
#include<stdio.h>



void printNaturalNums(int lowerLim, int upperLim);


int main()
{
	int lowerLim, upperLim;
	
	printf("\nTo print all the natural numbers in a certain range using recursion\n\n");	
	
	printf("Please enter lower limit: ");
	fflush(stdout);
	scanf("%d", &lowerLim);
	
	printf("Please enter upper limit: ");
	fflush(stdout);
	scanf("%d", &upperLim);
	
	printf("The natural numbers between %d and %d are: \n ", lowerLim, upperLim);
	
	printNaturalNums(lowerLim,upperLim);
	
	return 0;
}


void printNaturalNums(int lowerLim, int upperLim)
{
	if(lowerLim>upperLim)
	{
		return;
		
		/*
			this statement terminates (pops) the function at the top of the stack (the last function in the recursive chain)
			thus returning to the previous function in the stack just to find that there is noting else to execute in that
			function as well and so on until you reach "location [z]" in the function that was first called by main
			then returning to continue executing the main function
		*/
	}
	
	printf("%d\n", lowerLim);
	
	printNaturalNums(lowerLim + 1, upperLim);
	
	/*location [z]*/
}