/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.08.22
 * Date Started : 2022.08.22
 * Topic        : 24. C program to subtract two matrices
 *********************************************/
 
#include <stdio.h>

#define SIZE 3


int main()
{
	int matA	[SIZE][SIZE];
	int matB	[SIZE][SIZE];
	int matRes	[SIZE][SIZE];

	printf("\n----- C program to subtract two matrices [matA - matB] -----\n\n");
	
	
	printf("Please enter the elements in matA: \n");
	fflush(stdout);
	
	for(int i=0; i<SIZE; i++)
	{
		for(int j=0; j<SIZE; j++)
		{
			scanf("%d", &matA[i][j]);
		}
	}

	
	printf("\nPlease enter the elements in matB: \n");
	fflush(stdout);

	for(int i=0; i<SIZE; i++)
	{
		for(int j=0; j<SIZE; j++)
		{
			scanf("%d", &matB[i][j]);
		}
	}

	/*subtracting*/
	for(int i=0; i<SIZE; i++)
	{
		for(int j=0; j<SIZE; j++)
		{
			matRes[i][j] = matA[i][j] - matB[i][j];
		}
	}
	
	
	printf(" \n \nmatA - matB = \n");
	
	for(int i=0; i<SIZE; i++)
	{
		for(int j=0; j<SIZE; j++)
		{
			printf("%d   ",matRes[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}