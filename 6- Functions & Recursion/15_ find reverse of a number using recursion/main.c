/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.08.10
 * Date Started : 2022.08.10
 * Topic        : 15. C program to find reverse of a number using recursion
 *********************************************/
 
#include <stdio.h>


int reverseNum(int num);

int main()
{
	int num,reverse;
	
	printf("Enter a number to print its reverse: ");
	fflush(stdout);
	scanf("%d", &num);

	reverse = reverseNum(num);
	printf("The reverse of %d is: %d ", num, reverse);
	
	return 0;
}

int reverseNum(int num)
{
	/* a variable that eventually hold the value of the reverse of num after a series of summations*/
	static int reverseSum=0; 
	
	if(num!=0)
	{
		reverseSum = reverseSum*10 + num%10;
		reverseNum(num/10);
	}
	else
		return 0;
		
	
	return reverseSum;
	
}
