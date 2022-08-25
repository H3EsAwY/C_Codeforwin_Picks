/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.08.22
 * Date Started : 2022.08.22
 * Topic        : 27. C program to check whether two matrices are equal or not
 *********************************************/
 
#include <stdio.h>

#define SIZE 3


#define FALSE 0
#define TRUE  1

int main()
{
	int matA	[SIZE][SIZE];
	int matB	[SIZE][SIZE];
	
	int isEqualFlag = TRUE;
	/*We assume that the two matrices are equal initially*/
	
	printf("\n----- C program to check whether two matrices are equal or not [matA - matB] -----\n\n");
	
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
	
	/*checking*/
	for(int i=0; i<SIZE; i++)
	{
		for(int j=0; j<SIZE; j++)
		{
			if (matA[i][j] != matB[i][j])
			{
				isEqualFlag = FALSE;
				break;
			}
		}
	}
	
	if(isEqualFlag==TRUE)
	{
		printf("\nThe two matrices are equal");

	}
	else
	{
		printf("\nThe two matrices are NOT equal: \n");
	}
	
	
	return 0;
}
	