/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.08.22
 * Date Started : 2022.08.22
 * Topic        : 19. C program to sort array in ascending or descending order (Bubble Sort) (NOTE: It's insertion sort in CodeForWin)
 *********************************************/
 
#include <stdio.h>

#define MAX_ARRAY_SIZE 100


#define DESCENDING 0
#define ASCENDING  1


/**************************************/
	#define SORT_TYPE ASCENDING
/**************************************/

int main()
{
	int arr[MAX_ARRAY_SIZE];
	
	int arrSize;
	
	printf("Please enter the size of the array [0 ~ 100]: ");
	fflush(stdout);
	scanf("%d", &arrSize);
	
	printf("Enter the elements of the array that is to be sorted : \n "); 
	fflush(stdout);

	for(int i=0; i<arrSize; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	if(SORT_TYPE == ASCENDING)
	{
		/*
		 *	it won't really matter if the for loop condition is i<arrSize or i<arrSize-1 
		 *	if i<arrSize then it will make one iteration without swapping anything and wasting some time in the process
		 */
		 
		for(int i=0; i<arrSize; i++)
		{
			for(int j=0; j<arrSize-1; j++)
			{
				if(arr[j]>arr[j+1])
				{
					int temp = arr[j];
					
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
		
		/*printing the array*/
		printf("The array after being sorted in an ascending order: \n "); 
		
		for(int i=0; i<arrSize; i++)
		{
			printf("%d,  ", arr[i]);
		}
		
		
	}
	else if(SORT_TYPE == DESCENDING)
	{
		for(int i=0; i<arrSize; i++)
		{
			for(int j=0; j<arrSize-1; j++)
			{
				if(arr[j]<arr[j+1])
				{
					int temp = arr[j];
					
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
		
		/*printing the array*/
		printf("The array after being sorted in an descending order: \n "); 
		
		for(int i=0; i<arrSize; i++)
		{
			printf("%d,  ", arr[i]);
		}
		
	}
	
	
	
	
	return 0;
}

