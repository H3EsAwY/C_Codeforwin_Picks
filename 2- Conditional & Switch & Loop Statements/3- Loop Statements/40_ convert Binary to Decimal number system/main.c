/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.23
 * Topic        : C program to convert Binary to Decimal number system
 *********************************************/
 
    
#include <stdio.h>
#include <math.h>



int main()
{
	
	int binary,tempBin,decimal=0;
	int digitCounter=0; 
	int lastDigDec,lastDigBin;
	
	/*digitCounter is the position from the right*/
	
	printf("Enter a binary number to convert it to decimal: ");
	fflush(stdout);
	scanf("%d", &binary);
	
	tempBin = binary;
	
	while(tempBin!=0)
	{
		/*Extracting the last binary digit, lastDigBin is either 1 or 0*/
		lastDigBin = tempBin % 10;
		
		/*converting the binary digit to decimal*/
		lastDigDec = lastDigBin * pow(2,digitCounter); 
		
		/*Accumulating the sum of the digits */
		decimal = decimal + lastDigDec;
		
		
		/*getting rid of the extracted digit*/
		tempBin = tempBin / 10;
		digitCounter++;
		
	}
	
	printf("Binary: %d ---> Decimal: %d ", binary, decimal);

	
	return 0;
}