/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.09.24
 * Date Started : 2022.09.24
 * Topic        : 7. C program to toggle case of each character of a string.
 *********************************************/
 
 
#include <stdio.h>

#define MAX_SIZE 100


void strToggle(char str[MAX_SIZE]);

int main()
{
	char str[MAX_SIZE];
	
	printf("Enter a string to convert to toggle its letters: ");
	fflush(stdout);
	gets(str);
	
	
	strToggle(str);
	
	printf("\nstring after being toggled:\n %s ", str);
	
	return 0;
}

void strToggle(char str[MAX_SIZE])
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
		/* if upper make it lower, if lower make it upper */
		if( (str[i] >= 'A') && (str[i] <= 'Z') )
		{
			str[i] += 32;
		}
		else if( (str[i] >= 'a') && (str[i] <= 'z') )
		{
			str[i] -= 32;
		}
		
		i++;
	}	
}