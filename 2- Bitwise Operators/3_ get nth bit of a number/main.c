/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.24
 * Topic        : 3. C program to get nth bit of a number
 *********************************************/
 
#include <stdio.h>


int main()
{
	int num,nthBit;
	
	printf("Enter a number to check if its nth bit (from the right) is set or not: ");
	fflush(stdout);
	scanf("%d", &num);
	
	printf("Enter the number of the bit: ");
	fflush(stdout);
	scanf("%d", &nthBit);
	
	
	if( num>>nthBit & 1 == 1)
		printf("%dth bit of %d is set [1]", nthBit, num);
	else
		printf("%dth bit of %d is not set [0]", nthBit, num);

		
	
	return 0;
}