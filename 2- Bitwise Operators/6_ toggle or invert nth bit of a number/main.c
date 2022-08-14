/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.24
 * Topic        : 6. C program to toggle or invert nth bit of a number
 *********************************************/
   
#include <stdio.h>
 
 



int main()
{
	int num,nthBit;
	int numToggled;
	
	printf("Enter a number to toggle its nth bit (from the right): ");
	fflush(stdout);
	scanf("%d", &num);
	
	printf("Enter the number of the bit that is to be toggled: ");
	fflush(stdout);
	scanf("%d", &nthBit);
	
	/*****************************************************************************************************************************/
	/* how to toggle a bit?
		
	   using the XOR operator [^]
	   
	   if two bits differ, when XORed with each other, the result will be 1, if they don't differ the result will be 0
	   
	   a       0000 0110
	   b       0000 1101
	   -----------------
	   a ^ b   0000 1011
	   
	   
	   you can quickly see that if we XOR any bit(nthBit) with a set bit the result will be the nthBit inverted
	   
	   ex1: [x^1] = [0^1]
	   since 0 and 1 differ , result is [1]
	   
	   ex2: [x^1] = [1^1]
	   since 1 and 1 don't differ, result is [0]
	   
	   --> The first bit [x] will be inverted if XORed with 1 no matter its state
	   
	   --> in the same way, any bit XORed with 0 will not be affected.
	*/
	/*****************************************************************************************************************************/
	
	
	numToggled = num^(1<<nthBit);
	
	printf("\n%d after toggling the %d bit is: %d\n", num, nthBit, numToggled);
	printf("[decimal]");

	
	return 0;
}