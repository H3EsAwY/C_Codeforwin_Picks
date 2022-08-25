/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.08.22
 * Date Started : 2022.08.22
 * Topic        : 3. C program to find sum of array elements
 *********************************************/
 
#include <stdio.h>

#define MAX_ARRAY_SIZE 100


int main()
{
	int arr[MAX_ARRAY_SIZE];
	
	int arrSize, sum=0;


	printf("Please enter the size of array [0 ~ 100]: ");
	fflush(stdout);
	scanf("%d", &arrSize);
	
	printf("Enter the elements of the array: \n "); 
	fflush(stdout);
	
	
	/* inputting the elements into the array */
	for(int i=0; i<arrSize; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	/* finding sum of elements */
	
	for(int i=0; i<arrSize; i++)
	{
		sum = sum + arr[i];
	}
	
	printf("The sum of elements in the array is: %d", sum); 
	
	
	return 0;
}