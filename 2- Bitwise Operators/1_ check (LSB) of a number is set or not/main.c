/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.24
 * Topic        : 1. C program to check Least Significant Bit (LSB) of a number is set or not
 *********************************************/


#include <stdio.h>


int main()
{
	
	int num;
	
	
	printf("Enter a number to check if LSB is set or not: ");
	fflush(stdout);
	scanf("%d", &num);
	
	
	/*
	 * you can check if a certain bit is set or not if you and this bit with 1
	 * ex:
	 * 0000 1011   ``````````   0000 0010
	 *	   &       ``````````       &
	 * 0000 0001   ``````````   0000 0001
	 *     =       ``````````       =
	 * 0000 0001   ``````````   0000 0000
	 *	       1   ``````````           0
	 *	
	*/
	 
	if( (num&1) == 1)
		printf("LSB of %d is set [1]", num);
	else
		printf("LSB of %d is not set [0]", num);
	
	
	
	return 0;
}