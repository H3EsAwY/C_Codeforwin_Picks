/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.09.24
 * Date Started : 2022.09.24
 * Topic        : 16. C program to search all occurrences of a character in a string
 *********************************************/
 
#include <stdio.h>

#define MAX_SIZE 100

int allIndexOf (char str[MAX_SIZE], char charToFind, int arrIndicesOfCharOfChar[MAX_SIZE]);

int main()
{
	
	char str[MAX_SIZE];
	char character;
	
	int arrIndicesOfChar[MAX_SIZE];
	int matches;
	printf("Find all occurrences of a character in a given string:\n\n ");
	printf("Enter the string: ");
	fflush(stdout);
	gets(str);
	
	printf("Enter the character: ");
	fflush(stdout);
	scanf("%c", &character);
	
	
	matches = allIndexOf(str, character, arrIndicesOfChar);
	
	
	
	if( matches > 0 )
	{
		printf("'%c' was found at: ", character);
		
		for(int i=0; i<matches; i++)
		{
			printf("%d, ",arrIndicesOfChar[i]);
		}
	}
	else
	{
		printf("\nThe character '%c' doesn't exist in the string you entered.", character);
	}
	
	
	return 0;
}

int allIndexOf (char str[MAX_SIZE], char charToFind, int arrIndicesOfChar[MAX_SIZE])
{
	/*Edits arrIndicesOfChar and returns number of found matches*/
	
	/*note that iterArrIndex will have a value of 0 if there is no matches*/ 
	
	int iter=0;
	int iterArrIndex=0;
	
	arrIndicesOfChar[0] = -1;
	
	while(str[iter] != '\0')
	{
		if(str[iter] == charToFind)
		{
			arrIndicesOfChar[iterArrIndex] = iter;
			iterArrIndex++;
		}
		
		iter++;
	}
	
	return iterArrIndex;
}