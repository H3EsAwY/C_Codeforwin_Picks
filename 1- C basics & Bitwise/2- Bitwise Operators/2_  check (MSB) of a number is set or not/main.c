/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.24
 * Topic        : 2. C program to check Most Significant Bit (MSB) of a number is set or not
 *********************************************/


#include <stdio.h>

#define NUM_BITS sizeof(int)*8

/* Recall sizeof() operator "yes its an operator" it take a data type and return its size in bytes, a byte has 8 bits*/

int main()
{
	int num;
	
	int oneMSB;
	
	printf("Enter a number to check if MSB is set or not: ");
	fflush(stdout);
	scanf("%d", &num);
	
	/*****************************************************************************************************************************/
	/* 1st way: by shifting the the number's MSB to become the LSB then anding it with 1*/
	/*****************************************************************************************************************************/
	
	
	printf("|1st way|\n");
	
	/*note that we count bits from 0, so the MSB is  1 byte i.e 8 bit is the 7th bit not the 8th bit*/
	
	if( num>>(NUM_BITS-1)  & 1 == 1 )
		printf("MSB of %d is set [1]", num);
		
	else
		printf("MSB of %d is not set [0]", num);
	
	
	
	/*****************************************************************************************************************************/
	/* 2nd way: by shifting 1 to become of the highest order ex: 1000 0000, then anding it with the number*/
	/*****************************************************************************************************************************/
	
	
	printf("\n\n|2nd way|\n");
	
	oneMSB = 1 << (NUM_BITS-1);
	
	/*or if( (num&oneMSB) )!=0 or if(num&oneMSB)*/
	if( (num&oneMSB) == oneMSB ) 
		printf("MSB of %d is set [1]", num);
		
	else
		printf("MSB of %d is not set [0]", num);
		
		
		
	
	return 0;
}
	