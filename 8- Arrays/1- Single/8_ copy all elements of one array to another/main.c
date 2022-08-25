/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.08.22
 * Date Started : 2022.08.22
 * Topic        : 8. C program to copy all elements of one array to another
 *********************************************/
 
#include <stdio.h>

#define MAX_ARRAY_SIZE 100


int main ()
{
	
	int arr1[MAX_ARRAY_SIZE], arr2[MAX_ARRAY_SIZE] ;
	
	int arrSize;
	
	
	printf("Please enter the size of array [0 ~ 100]: ");
	fflush(stdout);
	scanf("%d", &arrSize);
	
	printf("Please enter the elements of one array to copy it into another: \n"); 
	fflush(stdout);
	
	
	for(int i=0; i<arrSize; i++)
	{
		scanf("%d", &arr1[i]);
	}
	
	
	printf("\nCopying ................... \n\n"); 
	
	for(int i=0; i<arrSize; i++)
	{
		arr2[i] = arr1[i] ;
	}
	
	printf("Array 1: "); 
	
	for(int i=0; i<arrSize; i++)
	{
		printf("%d,  ", arr1[i]);
		
	}
	printf("\nArray 2: "); 
	for(int i=0; i<arrSize; i++)
	{
		printf("%d,  ", arr2[i]);
		
	}
	
	return 0;
}
	