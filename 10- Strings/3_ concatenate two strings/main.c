/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.09.24
 * Date Started : 2022.09.24
 * Topic        : 3. C program to concatenate two strings.
 *********************************************/
 
#include <stdio.h>

#define MAX_SIZE 100

int get_strLen(char string[MAX_SIZE]);
void strConc( char destStr[MAX_SIZE], char srcStr[MAX_SIZE]);

int main()
{
	
	char destStr[MAX_SIZE], srcStr[MAX_SIZE];
	
	printf("You will enter 2 string to concatenate the 1st to the 2nd...\n\n ");

	printf("Please enter the source string: ");
	fflush(stdout);
	gets(srcStr);
	
	printf("Please enter the destination string: ");
	fflush(stdout);
	gets(destStr);
	
	strConc(destStr, srcStr);
	
	printf("\nDestination: %s", destStr);
	
	return 0;
	
}

int get_strLen(char string[MAX_SIZE])
{
	int lenCounter = 0;
	
	int iterator = 0;

	while(string[iterator] != '\0')
	{
		lenCounter++;
		iterator++;
	}
	
	return lenCounter;
}

void strConc( char destStr[MAX_SIZE], char srcStr[MAX_SIZE])
{
	int i=0;
	int j = get_strLen(destStr);
	
	while( srcStr[i] != '\0')
	{
		destStr[j] =  srcStr[i];
		i++;
		j++;
	}
	
	destStr[j] = '\0';
	
}

