/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.08.22
 * Date Started : 2022.08.22
 * Topic        : 16. C program to find reverse of array
 *********************************************/
 
#include <stdio.h>

#define MAX_ARRAY_SIZE 100


int main()
{
	int arr[MAX_ARRAY_SIZE], arrRev[MAX_ARRAY_SIZE];
	
	int arrSize;
	
	printf("Please enter the size of the array [0 ~ 100]: ");
	fflush(stdout);
	scanf("%d", &arrSize);
	
	printf("Enter the elements of the array that is to be reversed : \n "); 
	fflush(stdout);

	for(int i=0; i<arrSize; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("\n Reversing ............  \n\n ");
	
	/* for ( initialization ; condition; increment ) */
	
	for(int i=arrSize-1, j=0 ; i>=0 && j<arrSize ; i--, j++)
	{
		arrRev[j]= arr[i];
	}
	
	printf("The reversed array: \n ");
	
	for(int i=0; i<arrSize; i++)
	{
		printf("%d,  ",arrRev[i]);
	}
	
	
	
	return 0;
}
