/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.22
 * Topic        : C program to print natural numbers in reverse from n to 1
 *********************************************/
  
#include <stdio.h>


int main()
{
	
	int n,j;
	
	printf("Enter a number to print down from: ");
	fflush(stdout);
	scanf("%d", &n);
	
	
	printf("\nusing for loop\n");
	
	for(int i=n; i>0; i--)
	{
		printf("%d \n",i);
	}
	
	printf("\nusing while loop\n");
	
	j=n;
	while(j>0)
	{
		printf("%d \n",j);
		j--;
	}
	
	
	return 0;
}