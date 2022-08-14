/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.23
 * Topic        : C program to find sum of all natural numbers between 1 to n.
 *********************************************/
 
    
#include <stdio.h>


int main()
{
	
	int num,sum=0;
	
	printf("Enter a upper limit to find the sum of the natural numbers: ");
	fflush(stdout);
	scanf("%d", &num);
	
	
	for(int i=1; i<=num; i++)
	{
		sum=sum+i;
		
	}
	
	printf("The sum of the numbers from 1 to %d is: %d",num,sum);
	
	return 0;
}