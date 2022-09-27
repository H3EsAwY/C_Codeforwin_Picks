/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.09.24
 * Date Started : 2022.09.24
 * Topic        : 6. C program to convert uppercase string to lowercase.
 *********************************************/
 
#include <stdio.h>

#define MAX_SIZE 100

void strToLower(char str[MAX_SIZE]);

int main()
{
	char str[MAX_SIZE];
	
	printf("Enter a string to convert to lower: ");
	fflush(stdout);
	gets(str);
	
	
	strToLower(str);
	
	printf("\nstring after being converted to lower case:\n %s ", str);
	
	return 0;
}

void strToLower(char str[MAX_SIZE])
{
	/*
	 * ASCII for A: 65
	 * ASCII for a: 97
	 * 
	 * so check if letter is upper and add 65-97=32.
	 * as if we are just shifting the numbers by 32.
	 */
	 
	int i=0;
	
	while(str[i] != '\0')
	{
		if( (str[i] >= 'A') && (str[i] <= 'Z') )
		{
			str[i] += 32;
		}
		
		i++;
	}
	
}