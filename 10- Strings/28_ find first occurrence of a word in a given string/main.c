/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.09.24
 * Date Started : 2022.09.24
 * Topic        : 28. C program to find first occurrence of a word in a given string.
 *********************************************/
 
#include <stdio.h>

#define MAX_SIZE 100

int strIndexOfWord(char str[MAX_SIZE], char word[MAX_SIZE]);

int main()
{
	char str[MAX_SIZE], word[MAX_SIZE];
	int wordIndex;
	
	printf("Find first occurrence of a word in a given string\n\n ");

	printf("Please enter the string: ");
	fflush(stdout);
	gets(str);
	
	printf("Please enter the word: ");
	fflush(stdout);
	gets(word);
	
	
	wordIndex = strIndexOfWord(str, word);
	
	if(wordIndex >= 0)
	{
		printf("\nThe word \"%s\" was found at: index = %d", word, wordIndex);
	}
	else if (wordIndex == -1)
	{
		printf("\nThe word \"%s\" doesn't exist in the string you entered", word);
	}
	
	
	return 0;

}

int strIndexOfWord(char str[MAX_SIZE], char word[MAX_SIZE])
{
	int iterStr  = 0;
	int iterWord = 0;
	
	int indexOfWord = -1;
	
	/* By default, we didn't find the word*/
	int isWordFound = 0;
	
	while(str[iterStr] != '\0')
	{
		
		if(str[iterStr] == word[iterWord])
		{
			/*If the first letter of the word matches a char in str assume we found the word*/
			isWordFound = 1;
			
			while(word[iterWord] != '\0')
			{
				if(word[iterWord] != str[iterStr + iterWord])
				{
					/*
					 * If the word isn't an exact match to a series of chars in str
					 * starting from str[iterStr] , then we didn't find the word
					 */
					
					isWordFound = 0;
					iterWord = 0;
					break;
				}
				
				iterWord++;
			}
		}
		
		if(isWordFound == 1)
		{
			indexOfWord = iterStr;
			break;
		}
		
		iterStr++;
		
	}
	
	
	return indexOfWord;
	
}