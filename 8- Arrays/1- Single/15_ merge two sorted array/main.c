/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.08.22
 * Date Started : 2022.08.22
 * Topic        : 15. C program to merge two sorted array *ascending*
 *********************************************/
 
#include <stdio.h>

#define MAX_ARRAY_SIZE 100


int main()
{
	int arr1[MAX_ARRAY_SIZE], arr2[MAX_ARRAY_SIZE];
	int arrMerger[2 * MAX_ARRAY_SIZE];
	
	int arr1Size, arr2Size;
	int arrMergerSize;
	
	int iteratorArr1, iteratorArr2;
	int iteratorArrMerger;

	
	printf("Please enter the size of 1st array [0 ~ 100]: ");
	fflush(stdout);
	scanf("%d", &arr1Size);
	
	printf("Enter the elements of the 1st array sorted in ascending order : \n "); 
	fflush(stdout);
	
	for(int iteratorArr1=0; iteratorArr1<arr1Size; iteratorArr1++)
	{
		scanf("%d", &arr1[iteratorArr1]);
	}
	
	
	printf("Please enter the size of 2nd array  [0 ~ 100]: ");
	fflush(stdout);
	scanf("%d", &arr2Size);
	
	printf("Enter the elements of the 2nd array sorted in ascending order : \n "); 
	fflush(stdout);
	
	for(int iteratorArr2=0; iteratorArr2<arr2Size; iteratorArr2++)
	{
		scanf("%d", &arr2[iteratorArr2]);
	}
	
	arrMergerSize = arr1Size + arr2Size;
	
	iteratorArr1=0, iteratorArr2=0;
	
	for(iteratorArrMerger=0; iteratorArrMerger<arrMergerSize; iteratorArrMerger++)
	{
		if(iteratorArr1>=arr1Size || iteratorArr2>=arr2Size)
			break;
		
		
		if( arr1[iteratorArr1] < arr2[iteratorArr2] )
		{
			arrMerger[iteratorArrMerger] = arr1[iteratorArr1];
			iteratorArr1++;
		}
		else
		{
			arrMerger[iteratorArrMerger] = arr2[iteratorArr2];
			iteratorArr2++;
		}
	}
	
	while(iteratorArr1<arr1Size)
	{
		arrMerger[iteratorArrMerger] = arr1[iteratorArr1];
		iteratorArr1++;
		iteratorArrMerger++;

	}
	
	while(iteratorArr2<arr2Size)
	{
		arrMerger[iteratorArrMerger] = arr2[iteratorArr2];
		iteratorArr2++;
		iteratorArrMerger++;
	}
	
	
	printf("\n\nArrays Merged in ascending order:\n");
	
	for(iteratorArrMerger=0; iteratorArrMerger<arrMergerSize; iteratorArrMerger++)
	{
		printf("%d,  ", arrMerger[iteratorArrMerger] );
	}

	
	
	return 0;
}
