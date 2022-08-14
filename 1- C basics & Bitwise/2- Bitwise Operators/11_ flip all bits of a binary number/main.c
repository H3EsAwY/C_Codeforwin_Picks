/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.24
 * Topic        : 11. C program to flip all bits of a binary number
 *********************************************/
   
#include <stdio.h>
 
 
 
int main()
{
	int num,numFlipped;
	
	
	printf("Enter a number to flip all of its bits: ");
	fflush(stdout);
	scanf("%d", &num);
	
	numFlipped = ~num;
	
	printf("\n%d after flipping all of its bits: %d\n", num, numFlipped);
	
	
	
	return 0;
}