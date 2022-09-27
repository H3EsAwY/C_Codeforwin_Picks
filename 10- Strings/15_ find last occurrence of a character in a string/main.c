/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.09.24
 * Date Started : 2022.09.24
 * Topic        : 15. C program to find last occurrence of a character in a string
 *********************************************/
 
#include <stdio.h>

#define MAX_SIZE 100


int lastIndexOf(char str[MAX_SIZE], char charToFind);

int main()
{
	char str[MAX_SIZE];
	char character;
	
	int characterIndex;
	
	printf("Find last occurrence of a character in a given string:\n\n ");
	printf("Enter the string: ");
	fflush(stdout);
	gets(str);
	
	printf("Enter the character: ");
	fflush(stdout);
	scanf("%c", &character);
	
	
	characterIndex = lastIndexOf(str, character);
	
	if( characterIndex == -1 )
	{
		printf("\nThe character '%c' doesn't exist in the string you entered.", character);
	}
	else
	{
		printf("\nThe last occurrence of '%c' is at: (index = %d)", character, characterIndex );
	}
	
	
	
	return 0;
}
	
int lastIndexOf(char str[MAX_SIZE], char charToFind)
{
	int index = -1;
	int iter= 0;
	
	
	while(str[iter] != '\0')
	{
		if (str[iter] == charToFind)
		{
			index = iter;
		}
		
		iter++;
	}
	
	return index;
}