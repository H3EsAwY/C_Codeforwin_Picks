/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.08.22
 * Date Started : 2022.08.22
 * Topic        : 13. C program to count total duplicate elements in array
 *********************************************/
 
#include <stdio.h>

#define MAX_ARRAY_SIZE 100


int main()
{
	int arr[MAX_ARRAY_SIZE];
	
	int arrSize;
	int dupCount=0;
	
	
	printf("Please enter the size of array [0 ~ 100]: ");
	fflush(stdout);
	scanf("%d", &arrSize);
	
	printf("Enter the elements of the array: \n "); 
	fflush(stdout);
	
	for(int i=0; i<arrSize; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	
	/*
	 * take each element in the array and compare it to the rest of the array, if a duplicate exists update the counter
	 */
	
	for(int i=0; i<arrSize; i++)
	{
		for(int j=i+1; j<arrSize; j++)
		{
			if(arr[j] == arr[i])
			{
				dupCount++;
				break;
				
				/* 
				 *	break out of the inner loop [j] once you find the first occurrence of a duplicate to avoid counting
				 *	any succeeding duplicates
				 */
			}
		}
	}
	
	
	printf("\nThe Number of duplicates in the array is: %d ", dupCount); 

	
	
	return 0;
}