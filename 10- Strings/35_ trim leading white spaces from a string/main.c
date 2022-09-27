/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.09.24
 * Date Started : 2022.09.24
 * Topic        : 35. C program to trim leading white spaces from a string.
 *********************************************/
 
#include <stdio.h>

#define MAX_SIZE 100


void strTrimLeading(char str[MAX_SIZE]);

int main()
{
	
	char str[MAX_SIZE];
	
	printf("Enter a string to trim leading white spaces: \n");
	fflush(stdout);
	gets(str);;

	strTrimLeading(str);
	
	printf("\nThe string after trimming leading white spaces: \n%s", str);
	
	
	return 0;
}

void strTrimLeading(char str[MAX_SIZE])
{
	int iterWhiteSp=0;
	int iter = 0;
	
	while( str[iterWhiteSp] == ' ' || str[iterWhiteSp] == '\t' || str[iterWhiteSp] == '\n' )
	{
		iterWhiteSp++;
	}
	
	
	if(iterWhiteSp!=0)
	{
		/*Teleport all characters to left with an amount equal to iterWhiteSp (number of white spaces)*/
		
		while(str[iterWhiteSp + iter] != '\0')
		{
			str[iter] = str[iterWhiteSp + iter];
			iter++;
		}
		/*One more time to move the '\0' as well*/
		str[iter] = str[iterWhiteSp + iter]; 
	}
	
	
}