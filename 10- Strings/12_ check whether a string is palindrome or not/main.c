/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.09.24
 * Date Started : 2022.09.24
 * Topic        : 12. C program to check whether a string is palindrome or not.
 *********************************************/


#include <stdio.h>

#define MAX_SIZE 100

#define TRUE  1
#define FALSE 0

int strIsPalindrome(char str[MAX_SIZE]);

int main()
{
	char str[MAX_SIZE];
	
	printf("Enter a string to check if it's a palindrome: ");
	fflush(stdout);
	gets(str);
	
	if( strIsPalindrome(str) == TRUE )
	{
		printf("\nThe string is a Palindrome");
	}
	else
	{
		printf("\nThe string is NOT a Palindrome");
	}
	 
	return 0;
}

int strIsPalindrome(char str[MAX_SIZE])
{
	int length=0;
	char strRev[MAX_SIZE];
	
	int iter=0;
	
	/*getting length*/
	while(str[length] != '\0')
	{
		length++;
	}
	
	/*reversing the original string in another string*/
	for(int i=0; i<length; i++)
	{
		strRev[i] = str[length-1 -i];
	}
	
	while( (str[iter] != '\0' && strRev[iter] != '\0') && str[iter] == strRev[iter] )
	{
		iter++;
	}
	
	if( (str[iter] - strRev[iter]) == 0)
		return TRUE;
	else
		return FALSE;
}