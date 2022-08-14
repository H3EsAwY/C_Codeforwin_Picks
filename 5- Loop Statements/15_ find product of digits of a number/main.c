/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.23
 * Topic        : C program to find product of digits of a number
 *********************************************/
 
    
#include <stdio.h>


int main()
{
	/*
	 * 1. Extract the Last digit of a number using modulus division. [Num % 10] = [last digit]
	 *    because if you divide a number by 10. the remainder of the division (the fractional part that moved to the decimal place) 
	 *	  will be the last digit of a number.
	 *	
	 * 2. Continue ya 3m
 	 *
	 */
	
	int num,tempVal;
	int lastDig;
	int prod=1;
	
	printf("Enter a number to find the product of its digits: ");
	fflush(stdout);
	scanf("%d", &num);
	
	tempVal = num;
	while(tempVal!=0)
	{
		/*extracting the last digit*/
		lastDig = tempVal%10;
		
		prod *= lastDig;
		
		/*to change the last digit to be second (nth) to last, we have to remove a digit from the number, thus we divide be 10*/
		tempVal = tempVal/10;
	}
	
	
	printf("The product of digits of %d is %d",num ,prod);
	
	
	return 0;
}