/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.09.24
 * Date Started : 2022.09.24
 * Topic        : 20. C program to count frequency of each character in a string.
 *********************************************/
 
#include <stdio.h>

#define MAX_SIZE 100

void strCountFreq(char str[MAX_SIZE], int alphabetFreq[26]);

int main()
{
	char str[MAX_SIZE];
	int alphabetFreq[26];
	
	
	printf("Enter a string to check frequency of alphabet letters: ");
	fflush(stdout);
	gets(str);
	
	strCountFreq(str, alphabetFreq);
	
	printf("\nThe Frequency of all alphabets in the given string:\n ");
	
	for(int i=0; i<26; i++)
	{
		if(alphabetFreq[i] != 0)
		{
			printf("'%c' = %d\n", i+97, alphabetFreq[i] );
		}
	}
	
	return 0;
}


void strCountFreq(char str[MAX_SIZE], int alphabetFreq[26])
{
	
	/*
	 *	A in ASCII: 65
	 *	a in ASCII: 97
	 */
	
	int iter = 0;
	
	for(int i=0; i<26; i++)
	{
		alphabetFreq[i] = 0;
	}
	
	while(str[iter] != '\0')
	{
		if(str[iter] >= 'A' && str[iter] <= 'Z')
		{
			alphabetFreq[ str[iter] - 65]++;
		}
		else if(str[iter] >= 'a' && str[iter] <= 'z')
		{
			alphabetFreq[ str[iter] - 97]++;
		}
		
		iter++;
	}
	
}