/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.08.22
 * Date Started : 2022.08.22
 * Topic        : 9. C program to insert an element in array
 *********************************************/
 
#include <stdio.h>

#define MAX_ARRAY_SIZE 100



int main()
{
	int arr[MAX_ARRAY_SIZE];
	
	int arrSize;
	int element, pos;

	printf("Please enter the size of array [0 ~ 100]: ");
	fflush(stdout);
	scanf("%d", &arrSize);
	
	printf("Enter the elements of the array: \n "); 
	fflush(stdout);
	for(int i=0; i<arrSize; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("Please enter an element to insert: ");
	fflush(stdout);
	scanf("%d", &element);
	
	printf("Please enter the position of the element [1, 2, 3.... Array Size+1]: ");
	fflush(stdout);
	scanf("%d", &pos);
	
	if( pos > 0 && pos <= arrSize+1 )
	{
		/*shifting the whole array forward be one element starting from the wanted position to inset the node*/
		for(int i = arrSize; i>=pos-1; i--)
		{
			arr[i+1] = arr[i];
		}
		
		arrSize++;
		
		arr[pos-1] = element;
		
		printf("\nThe elements of the array after inserting %d at %d postion: \n\n", element, pos); 
		
		for(int i=0; i<arrSize; i++)
		{
			printf("%d, ", arr[i]);
		}
	}
	else
	{
		printf("\nPlease enter a valid position [1, 2, 3.... Array Size+1] ");
	}
	
	return 0;
}