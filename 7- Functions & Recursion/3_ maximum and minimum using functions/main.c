/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.08.10
 * Date Started : 2022.08.10
 * Topic        : C program to find maximum and minimum using functions
 *********************************************/

#include <stdio.h>


int getMax(int num1, int num2);
int getMin(int num1, int num2);

int main()
{
	
	int num1,num2;
	
	
	printf("Please enter 2 numbers to find the max and min:\n");
	fflush(stdout);
	scanf("%d%d",&num1,&num2);
	
	printf("\nMaximum: %d \n", getMax(num1,num2));
	
	printf("Minimum: %d \n", getMin(num1,num2));


	
	
	return 0;
}

int getMax(int num1, int num2)
{
	if(num1>num2)
		return num1;
	else
		return num2;
}


int getMin(int num1, int num2)
{
	if(num1<num2)
		return num1;
	else
		return num2;
}