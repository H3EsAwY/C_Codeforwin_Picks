/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.09.24
 * Date Started : 2022.09.24
 * Topic        : 5. C program to convert lowercase string to uppercase.
 *********************************************/
 
#include <stdio.h>

#define MAX_SIZE 100

void strToUpper(char str[MAX_SIZE]);

int main()
{
	char str[MAX_SIZE];
	
	printf("Enter a string to convert to upper: ");
	fflush(stdout);
	gets(str);
	
	
	strToUpper(str);
	
	printf("\nstring after being converted to lower case:\n %s ", str);
	
	return 0;
}

void strToUpper(char str[MAX_SIZE])
{
	/*
	 * ASCII for A: 65
	 * ASCII for a: 97
	 * 
	 * so check if letter is upper and subtract 65-97=32.
	 * as if we are just shifting the numbers by -32.
	 */
	 
	int i=0;
	
	while(str[i] != '\0')
	{
		if( (str[i] >= 'a') && (str[i] <= 'z') )
		{
			str[i] -= 32;
		}
		
		i++;
	}
	
}