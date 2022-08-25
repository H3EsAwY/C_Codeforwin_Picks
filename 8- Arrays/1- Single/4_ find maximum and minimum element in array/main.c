/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.08.22
 * Date Started : 2022.08.22
 * Topic        : 4. C program to find maximum and minimum element in array
 *********************************************/
 
#include <stdio.h>

#define MAX_ARRAY_SIZE 100


int main()
{
	int arr[MAX_ARRAY_SIZE];
	
	int arrSize, largest, smallest;
	
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
	
	
	largest  = arr[0];
	smallest = arr[0];
	
	for(int i=0; i<arrSize; i++)
	{
		if(arr[i] > largest)
			largest = arr[i];
		
		if(arr[i]<smallest)
			smallest = arr[i];
	}
	
	printf("The smallest element is : %d \n", smallest); 
	printf("\nThe largest element is : %d \n", largest); 
	
	
	
	
	return 0;
}