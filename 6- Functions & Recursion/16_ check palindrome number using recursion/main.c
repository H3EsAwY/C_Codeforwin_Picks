/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.08.10
 * Date Started : 2022.08.10
 * Topic        : 16. C program to  check palindrome number using recursion
 *********************************************/
 
#include <stdio.h>


#define PALINDROME 1
#define NOT_PALINDROME 0


int reverseNum(int num);
int isPalindrome(int num);

int main()
{
	
	int num;
	
	
	printf("Please enter a number to check if it is palindrome or not using recursion: ");
	fflush(stdout);
	scanf("%d", &num);
	
	if(isPalindrome(num) == PALINDROME)
		printf("The number %d is a Palindrome", num);
	else
		printf("The number %d is a NOT a Palindrome", num);

	
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

int isPalindrome(int num)
{
	if(num == reverseNum(num))
		return PALINDROME;
	else
		return NOT_PALINDROME;
}