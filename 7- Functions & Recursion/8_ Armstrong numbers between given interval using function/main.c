/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.08.10
 * Date Started : 2022.08.10
 * Topic        : C program to print all Armstrong numbers aka (Narcissistic Numbers) between given interval using function
 *********************************************/

#include <stdio.h>
#include <math.h>

/*
 * Armstrong numbers:
 * 
 * take a number then find the numbers of digits [n] it has
 * then take each digit and raise it to the power of number of digits [n] then add them.
 * if you get the same number again. then this is an Armstrong number
 *
 * ex: 	407
 * 		numDigits=3
 *		(4*4*4) + (0*0*0) + (7*7*7) = 407
 *
 */
 
/*
 * Steps:
 * 
 * 1- get a number
 * 2- get its number of digits
 * 3- extract each digit and perform operation
 *
 *
 *
 */



#define ARMSTRONG 		1
#define NOT_ARMSTRONG 	0


int countDigits (int num);
int isArmstrong(int num); 
void printArmstrong(int lowerLim, int upperLim);



int main()
{
	int lowerLim, upperLim;
	
	
	printf("\nTo check for Armstrong numbers in a certain range\n\n");	
	
	printf("Please enter lower limit: ");
	fflush(stdout);
	scanf("%d", &lowerLim);
	
	printf("Please enter upper limit: ");
	fflush(stdout);
	scanf("%d", &upperLim);
	
	printf("The Armstrong numbers between %d and %d are: \n ", lowerLim, upperLim);
	printArmstrong(lowerLim, upperLim);
	
	return 0;
}

int countDigits (int num)
{
	int digitCount=0;
	
	while(num!=0)
	{
		num = num / 10;
		digitCount++;
	}
	
	return digitCount;
	
}

int isArmstrong(int num)
{
	
	int digitCount = countDigits(num);
	int currentDigit;						/* holds the value of the last digit in tempVal in a certain iteration */
	int tempVal  = num; 					/* a variable used to access each digit in num without editing num itself*/
	int armstrongSum = 0;
	

	while(tempVal!=0)
	{
		currentDigit = tempVal%10;
		armstrongSum = armstrongSum + pow(currentDigit,digitCount);
		
		tempVal = tempVal/10;
	}
	
	if(armstrongSum == num)
	{
		return ARMSTRONG;
	}
	else
	{
		return NOT_ARMSTRONG;
	}
	
}

void printArmstrong(int lowerLim, int upperLim)
{
	
	int currentNum;
	
	for(currentNum = lowerLim; currentNum <= upperLim; currentNum++)
	{
		if(isArmstrong(currentNum) == ARMSTRONG)
		{
			printf("%d \n",currentNum);
		}
		
	}
	
}