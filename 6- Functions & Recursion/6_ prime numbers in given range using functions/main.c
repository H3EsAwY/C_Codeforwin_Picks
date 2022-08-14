/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.08.10
 * Date Started : 2022.08.10
 * Topic        : C program to print all prime numbers in given range using functions
 *********************************************/

#include <stdio.h>


#define PRIME      1
#define NOT_PRIME  0


void printPrimes(int lowerLim, int upperLim);
int isPrime(int num);


int main()
{
	int lowerLim, upperLim;
	
	printf("\nTo check for prime numbers in a certain range\n\n");
	
	printf("Please enter lower limit: ");
	fflush(stdout);
	scanf("%d", &lowerLim);
	
	printf("Please enter upper limit: ");
	fflush(stdout);
	scanf("%d", &upperLim);
	
	printf("The prime numbers between %d and %d are: \n ", lowerLim, upperLim);
	printPrimes(lowerLim,upperLim);

	
	
	
	return 0;
}

int isPrime(int num)
{
	/*a prime number is a number divisible by 2 numbers, itself and 1*/
	
	/*Corner Case : 1 is not a prime because it is only divisible by one number which is 1*/
	
	if(num <= 1)
		return NOT_PRIME;
		
	for(int i=2; i<num; i++)
	{
		if(num%i == 0)
		{
			return NOT_PRIME;
		}
		
	}
	
	return PRIME;
	
	/*
	 * Note:
	 * you can check for factors between 2 and num/2 only, even better, sqrt(num)
	 * because if a number is not prime then it must have a factor between 2 and square root of num
	 *
	 */
}

void printPrimes(int lowerLim, int upperLim)
{
	/* An integer holding the value of the number that is currently being checked*/
	int currentNum;
	
	for(currentNum = lowerLim; currentNum <= upperLim; currentNum++)
		{
			if (isPrime(currentNum) == PRIME)
			{
				printf("%d \n ", currentNum);
			}
			
		}
}




