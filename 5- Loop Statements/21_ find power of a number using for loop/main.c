/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.23
 * Topic        : C program to find power of a number using for loop
 *********************************************/
 
    
#include <stdio.h>


int main()
{
	int base,power;
	int result=1;
	
	
	printf("Enter the Base: ");
	fflush(stdout);
	scanf("%d", &base);
	
	printf("Enter the Power: ");
	fflush(stdout);
	scanf("%d", &power);
	
	for(int i=0; i<power; i++)
	{
		result = base * result;
	}
	
	printf("%d to the power of %d is: %d",base, power, result);
	
	return 0;
}