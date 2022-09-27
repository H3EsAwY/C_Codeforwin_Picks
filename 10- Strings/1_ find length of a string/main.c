/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.09.24
 * Date Started : 2022.09.23
 * Topic        : 1. C program to find length of a string.
 *********************************************/
 
#include <stdio.h>

#define MAX_SIZE 100

int get_strLen(char string[MAX_SIZE]);


int main()
{
	
	char string[MAX_SIZE];
	int len;
	
	printf("Please enter a string to find its length: ");
	fflush(stdout);
	
	
	//fgets(string, MAX_SIZE, stdin); 			/*fgets stores the \n at the end. thus has one extra char*/
	
	gets(string);								/* gets doesn't store \n*/		
	
	/*scanf("%[^\n]s", &string);*/				/*neither does scanf*/
	
	len = get_strLen(string);
	
	printf("\nThe length of the string is: %d", len);
	
	
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