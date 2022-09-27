/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.09.24
 * Date Started : 2022.09.24
 * Topic        : 11. C program to find reverse of a string.
 *********************************************/


#include <stdio.h>

#define MAX_SIZE 100


char* strReverse(char str[MAX_SIZE]);

int main()
{
	char str[MAX_SIZE];
	
	printf("Enter a string to convert to reverse its letters: ");
	fflush(stdout);
	gets(str);
	
	
	strReverse(str);
	
	printf("\nstring after being r:\n %s ", str);
	
	/*
	 *	or you can just do:
	 *	printf("\nstring after being r:\n %s ", strReverse(str));
	 */
	 
	return 0;
	
}


char* strReverse(char str[MAX_SIZE])
{
	/*The function modifies the original string as it is
	  passed be reference, and returns its address as well*/ 
	  
	int length = 0;
	char tempChar;
	
	while(str[length] != '\0')
	{
		length++;
	}
	
	/* Swap the str[0] and str[len-1 - 0]elements of the string */
	/* Swap the str[1] and str[len-1 - 1]elements of the string */
	/* Swap the str[2] and str[len-1 - 2]elements of the string */
	/* and so on..... until you reach the middle */
	
	for(int i=0; i<length/2; i++)
	{
		/*swapping each character with its mirror*/
		
		tempChar = str[i];
		str[i] = str[length-1 -i];
		str[length-1 -i] = tempChar;
	}
	
	return str;
}
