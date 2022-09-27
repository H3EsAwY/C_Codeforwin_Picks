/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.09.24
 * Date Started : 2022.09.24
 * Topic        : 2. C program to copy one string to another string.
 *********************************************/
 
#include <stdio.h>

#define MAX_SIZE 100


void do_strCpy(char destStr[MAX_SIZE], char srcStr[MAX_SIZE]);

int main()
{
	char destStr[MAX_SIZE], srcStr[MAX_SIZE];
	
	printf("Please enter the string you want to copy: ");
	fflush(stdout);
	gets(srcStr);
	
	do_strCpy(destStr, srcStr);
	
	printf("\nSource       : %s\n", srcStr);
	printf("Destination: %s", destStr);
	
	return 0;
}

void do_strCpy(char destStr[MAX_SIZE], char srcStr[MAX_SIZE])
{
	
	int i=0;
	
	while(srcStr[i] != '\0')
	{
		destStr[i] = srcStr[i];
		i++;
	}
	destStr[i] = '\0';

}