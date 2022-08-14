/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.08.10
 * Date Started : 2022.08.10
 * Topic        : 10. C program to find power of a number using recursion
 *********************************************/
 
 
 
#include <stdio.h>



int power(int base, int expo);

int main()
{
	int base, exponent;
	
	
	printf("Please enter the base: ");
	fflush(stdout);
	scanf("%d", &base);
	
	printf("Please enter the exponent: ");
	fflush(stdout);
	scanf("%d", &exponent);
		
	printf("%d raised to the power of %d is: %d", base, exponent, power(base,exponent));
 
	
	
	
	return 0;
}


int power(int base, int expo)
{
	if(expo==0)
		return 1;
		
	else if(expo>0)
		return base * power(base,expo-1);
		
	else /* expo < 0 */
		return 1/power(base,-expo);
	
}