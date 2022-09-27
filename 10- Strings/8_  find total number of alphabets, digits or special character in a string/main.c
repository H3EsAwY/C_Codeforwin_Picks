/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.09.24
 * Date Started : 2022.09.24
 * Topic        : 8. C program to  find total number of alphabets, digits or special character in a string.
 *********************************************/


#include <stdio.h>

#define MAX_SIZE 100

int main()
{
	
	char str[MAX_SIZE];
	
	int alphas=0, digits=0, specials=0;
	
	
	printf("Please enter a string to count its alphabets, digits and special characters: \n");
	fflush(stdout);
	gets(str);
	
	int i=0;
	while(str[i] != '\0')
	{
		
		if( ( (str[i] >= 'A') && (str[i] <= 'Z') ) || ( (str[i] >= 'a') && (str[i] <= 'z') ) )
		{
			alphas++;
		}
		else if( (str[i] >= '0') && (str[i] <= '9') )
		{
			digits++;
		}
		else
		{
			specials++;
		}
		
		i++;
	}
	
	printf("-----------------\n");
	printf("Alphabets: %d\n", alphas);
	printf("Digits: %d\n", digits);
	printf("Special Characters: %d\n", specials);
	
	
	return 0;
}
