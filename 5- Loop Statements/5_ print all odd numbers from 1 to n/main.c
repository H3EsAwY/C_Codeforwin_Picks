/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.23
 * Topic        : C program to print all odd numbers from 1 to n
 *********************************************/
 
 
   
#include <stdio.h>


int main()
{
	
	int num;
	
	printf("Enter a upper limit to print the odd the numbers: ");
	fflush(stdout);
	scanf("%d", &num);
	
	
	for(int i=0; i<=num; i++)
	{
		if(i%2!=0)
		{
			printf("%d \n",i);
		}
	}
	
	
	
	
	return 0;
}