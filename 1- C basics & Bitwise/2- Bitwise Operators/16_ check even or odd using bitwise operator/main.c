/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.24
 * Topic        : 16. C program to check even or odd using BitWise operator
 *********************************************/
 
 
    
#include <stdio.h>




int main()
{
	
	int num,LSB;
	
	printf("Enter a number to check odd or even (done using BitWise Operators): ");
	fflush(stdout);
	scanf("%d", &num);
	
	/*****************************************************************************************************************************/

	/* 
		in binary, the LSB of an odd number is 1, and the LSB of an even number is 0
		you could always think of 1 and 2 in binary
		
		1: 0000 0001
		2: 0000 0010
		3: 0000 0011
		4: 0000 0100
		5: 0000 0101
		and so on .......
		so all we have to do is check the LSB
		
		you can check LSB by ANDing the number with 1
		
	*/
	/*****************************************************************************************************************************/
	
	LSB = num & 1;
	
	if(LSB == 1)
		printf("The number %d is: odd", num);
	else
		printf("The number %d is: even", num);
	

	
	
	return 0;
}