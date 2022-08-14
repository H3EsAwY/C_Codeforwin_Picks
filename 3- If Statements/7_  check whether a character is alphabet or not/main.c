/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.22
 * Topic        : C program to check whether a character is alphabet or not
 *********************************************/
 
 
#include <stdio.h>


int main()
{
	/* note that in the ASCII table, the letters from a-z , A-Z have consecutive values 
		you can check the table and see for your self
	*/
	
	char ASCII;  /* CChar data type ensures that only one character is entered */
	
	printf ("Enter a character to check if it is Alphabet or not: ");
	fflush(stdout);
	scanf("%c", &ASCII);
	
	if( (ASCII>='a' && ASCII<='z') || (ASCII>='A' && ASCII<='Z') )
	{
		printf ("The character is an Alphabet");
	}
	else
	{
		printf ("The character is NOT an Alphabet");

	}
	
	
	return 0;
}
 
 