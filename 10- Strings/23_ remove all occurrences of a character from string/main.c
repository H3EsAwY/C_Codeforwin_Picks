/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.09.24
 * Date Started : 2022.09.24
 * Topic        : 23. C program to remove all occurrences of a character from string
 *********************************************/
 
#include <stdio.h>

#define MAX_SIZE 100

void strRemoveAllMatches(char str[MAX_SIZE], char character);


int main()
{
	char str[MAX_SIZE];
	char character;
	
	
	printf("Remove all occurrences of a character from string:\n\n ");
	printf("Enter the string: ");
	fflush(stdout);
	gets(str);
	
	printf("Enter the character: ");
	fflush(stdout);
	scanf("%c", &character);
	
	strRemoveAllMatches(str, character);
	
	printf("The string after removing all occurrences of '%c': \n", character);
	printf("%s", str);

	
	
	return 0;
}

void strRemoveAllMatches(char str[MAX_SIZE], char character)
{
	int i=0,j=0;
	int currentLen = 0;
	
	/*getting the length of the string*/
	while(str[currentLen] != '\0')
	{
		currentLen++;
	}
	
	
	for(i=0; i<currentLen; i++)
	{
		
		if(str[i] == character)
		{
			/* Note: '\0' exists at str[currentLen], so make sure it gets shifted left. */
			for( j=i; j<currentLen; j++)
			{
				str[j] = str[j + 1];
			}
			
			currentLen--;
			
			/*When you remove a character, the index i will now point to a new element*/
			/*make sure you check that element as well, so decrement i to check str[i] again*/
			i--;
			
		}
		
	}
	
	
}