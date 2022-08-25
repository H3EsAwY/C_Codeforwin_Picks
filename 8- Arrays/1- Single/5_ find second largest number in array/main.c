/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.08.22
 * Date Started : 2022.08.22
 * Topic        : 5. C program to find second largest number in array
 *********************************************/
 
#include <stdio.h>

#define MAX_ARRAY_SIZE 100


int main()
{
	int arr[MAX_ARRAY_SIZE];
	
	int arrSize, largest, largest2nd;

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
	
	largest = arr[0];
	largest2nd = arr[0];
	
	
	for(int i=0; i<arrSize; i++)
	{
		
		if(arr[i] > largest)
		{
			largest2nd = largest;
			largest = arr[i];
		}
	}
	
	printf("\nThe 2nd largest element is : %d ", largest2nd); 

	
	
	
	
	return 0;
}
