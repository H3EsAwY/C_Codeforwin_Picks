/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.23
 * Topic        : C program to count number of digits in an integer
 *********************************************/
 
    
#include <stdio.h>

int main()
{
	int num;
	int tempVal;
	int digitCounter=0;
	
	
	printf("Enter a number to count its digits: ");
	fflush(stdout);
	scanf("%d", &num);
	
	tempVal=num;
	for(digitCounter=0; tempVal!=0; digitCounter++)
	{
		tempVal=tempVal/10;
		
		/*We can see how many times we can divide a number by 10 and still have a number greater than 0*/
		/*note that 0.2309 for example when stored in an int is stored as 0*/ 
	}
	
	printf("The number of digits of %d is %d",num,digitCounter);
	
	return 0;
}