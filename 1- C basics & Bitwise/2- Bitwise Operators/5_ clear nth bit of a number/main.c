/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.24
 * Topic        : 5. C program to clear nth bit of a number
 *********************************************/
 
  
#include <stdio.h>


int main()
{
	
	int num,nthBit;
	int numCleared;
	
	printf("Enter a number to clear its nth bit (from the right): ");
	fflush(stdout);
	scanf("%d", &num);
	
	printf("Enter the number of the bit that is to be cleared: ");
	fflush(stdout);
	scanf("%d", &nthBit);
	
	/*****************************************************************************************************************************/
	/* how to clear a bit?
		
	   and it with a binary number that has 1s all across but 0 in the nth bit to be cleared
	   
	   ex: clear bit 3 (COUNT FROM 0)
	   
	   0000 1011  A
	       &
	   1111 0111  B
	       =
	   0000 0011
	   
	   
	   ***The question is how do we get B, the number that is to be anded with with main binary number***
	   
	   1<<nthBit so we get in the same ex, C: 0000 1000
	   
		then we invert or use the complement operator
		~(1<<nthBit) D: 1111 0111 --> B
	*/
	/*****************************************************************************************************************************/
	
	numCleared = num & ( ~(1<<nthBit) );
	
	printf("\n%d after clearing the %d bit is: %d\n", num, nthBit, numCleared);
	printf("[decimal]");

	
	
	return 0;
}