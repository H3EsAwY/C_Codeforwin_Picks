/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.08.10
 * Date Started : 2022.08.10
 * Topic        : 12. C program to print even or odd numbers in given range using recursion
 *********************************************/
 
/*see prob 11 for notes*/
 
#include<stdio.h>


void printEvenNums (int lowerLim, int upperLim);
void printOddNums  (int lowerLim, int upperLim);

int main()
{
	int lowerLim, upperLim;
	
	printf("\nTo print all the Even and Odd numbers in a certain range using recursion\n\n");
	
	printf("Please enter lower limit: ");
	fflush(stdout);
	scanf("%d", &lowerLim);
	
	printf("Please enter upper limit: ");
	fflush(stdout);
	scanf("%d", &upperLim);
	
	printf("The Even numbers between %d and %d are: \n ", lowerLim, upperLim);
	printEvenNums(lowerLim, upperLim);
	
	printf("The Odd numbers between %d and %d are: \n ", lowerLim, upperLim);
	printOddNums(lowerLim, upperLim);
	
	return 0;
}


void printEvenNums (int lowerLim, int upperLim)
{
	if(lowerLim>upperLim)
		return;
	
	if(lowerLim%2==0)
	{
		printf("%d \n",lowerLim);
		return printEvenNums(lowerLim+2,upperLim);
		/* lowerLim+2 means if you are even stay even, if you are odd stay odd ||| and get me the next number*/
	}
	else
	{
		return printEvenNums(lowerLim+1,upperLim);
	}
	
	
}
	
void printOddNums  (int lowerLim, int upperLim)
{
	if(lowerLim>upperLim)
		return;
	
	if(lowerLim%2!=0)
	{
		printf("%d \n",lowerLim);
		return printOddNums(lowerLim+2,upperLim);
		/* lowerLim+2 means if you are even stay even, if you are odd stay odd ||| and get me the next number*/
	}
	else
	{
		return printOddNums(lowerLim+1,upperLim);
	}
}