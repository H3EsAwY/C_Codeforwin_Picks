/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.24
 * Topic        : 4. C program to set nth bit of a number
 *********************************************/
 
  
#include <stdio.h>


int main()
{
	
	int num,nthBit;
	int numSet;
	
	
	
	printf("Enter a number to set its nth bit (from the right): ");
	fflush(stdout);
	scanf("%d", &num);
	
	printf("Enter the number of the bit that is to be set: ");
	fflush(stdout);
	scanf("%d", &nthBit);
	
	
	/*****************************************************************************************************************************/
	/*
		**or** the number with a number that has 0s all across but 1 in the bit to be set
		ex: set bit 3 (COUNT FROM 0)
	   
	   0000 0011  A
	       |
	   0000 1000  B
	       =
	   0000 1011
	   
	   
	   to get B
	   
	   1<<nthBit
	*/
	/*****************************************************************************************************************************/
	
	numSet = num | 1<<nthBit;
	
	printf("\n%d after setting the %d bit is: %d\n", num, nthBit, numSet);
	printf("[decimal]");
	
	
	
	
	
	return 0;
}