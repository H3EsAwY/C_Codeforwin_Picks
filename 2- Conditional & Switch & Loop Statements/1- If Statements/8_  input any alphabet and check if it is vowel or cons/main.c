/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.22
 * Topic        : C program to input any alphabet and check whether it is vowel or consonant.
 *********************************************/
 
#include <stdio.h>

int main()
{
	/* The vowels in English are ( a, e, i, o, u ) and don't forget the capital variants ( A, E, I, O, U ) */
	
	
	char ASCII;
	
	printf ("Enter a letter to check if its a vowel or constant: ");
	fflush(stdout);
	
	scanf("%c", &ASCII);
	
	if( 
		ASCII == 'a' ||
		ASCII == 'e' ||
		ASCII == 'i' ||
		ASCII == 'o' ||
		ASCII == 'u' ||
		ASCII == 'A' ||
		ASCII == 'E' ||
		ASCII == 'I' ||
		ASCII == 'O' ||
		ASCII == 'U'	
	  )
	{
		  printf ("The alphabet character is vowel");
	}
	  
	else if ( (ASCII>='a' && ASCII<='z') || (ASCII>='A' && ASCII<='Z') )
	{
		printf ("The alphabet character is consonant");
	}
	  
	else
	{
		printf ("The character entered is neither a vowel nor a consonant, it is not in the Alphabet !!");
	}
	
	return 0;
}