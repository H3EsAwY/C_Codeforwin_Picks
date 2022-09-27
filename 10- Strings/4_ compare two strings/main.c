/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.09.24
 * Date Started : 2022.09.24
 * Topic        : 4. C program to compare two strings
 *********************************************/
 
#include <stdio.h>

#define MAX_SIZE 100


int get_strCmp( char str1[MAX_SIZE], char str2[MAX_SIZE]);

int main()
{
	char str1[MAX_SIZE], str2[MAX_SIZE];
	
	printf("You will enter 2 string to compare...\n\n ");

	printf("Please enter the string 1: ");
	fflush(stdout);
	gets(str1);
	
	printf("Please enter the string 2: ");
	fflush(stdout);
	gets(str2);
	
	if (get_strCmp(str1, str2) == 0)
	{
		printf("The two strings are identical");
	}
	else
	{
		printf("The two strings are NOT equal");
	}
	
	
	return 0;
}

int get_strCmp( char str1[MAX_SIZE], char str2[MAX_SIZE])
{
	int i=0;
	
	while( (str1[i] != '\0' && str2[i] != '\0') && str1[i] == str2[i])
	{
		i++;
	}
	
	
	
	return (str1[i] - str2[i]);
}