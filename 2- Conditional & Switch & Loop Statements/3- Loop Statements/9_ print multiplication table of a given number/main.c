/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.23
 * Topic        : C program to find sum of all natural numbers between 1 to n.
 *********************************************/
 
    
#include <stdio.h>



int main()
{
	
	int num,multVal;
	
	printf("Enter a number to print its multiplication table: ");
	fflush(stdout);
	scanf("%d", &num);
	
	for(int i=1; i<=10; i++)
	{
		
		multVal= num * i;
		printf(" %d * %d = %d \n",num,i,multVal);
	}
	
	
	
	return 0;
}