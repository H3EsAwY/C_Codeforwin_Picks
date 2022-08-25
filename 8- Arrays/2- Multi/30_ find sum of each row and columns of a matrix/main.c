/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.08.22
 * Date Started : 2022.08.22
 * Topic        : 30. C program to find sum of each row and columns of a matrix
 *********************************************/
  
#include <stdio.h>

#define SIZE 3


#define FALSE 0
#define TRUE  1


int main()
{
	int matA	[SIZE][SIZE];
	int rowSumTemp=0, colSumTemp=0;
	
	printf("\n----- C program to find sum of each row and columns of a matrix -----\n\n");
	
	printf("Please enter the elements in matA: \n");
	fflush(stdout);
	
	for(int i=0; i<SIZE; i++)
	{
		for(int j=0; j<SIZE; j++)
		{
			scanf("%d", &matA[i][j]);
		}
	}
	
	
	/*
	 *	matA[row][col]
	 */
	 
	/*sum of Rows*/
	for(int i=0; i<SIZE; i++)
	{
		rowSumTemp = 0;
		
		for(int j=0; j<SIZE; j++)
		{
			rowSumTemp = rowSumTemp + matA[i][j];
			
			/*
			 *	matA[row][col]
	         *  row is constant and col is changing matA[i][j]
			 *
			 */
		}
		
		printf("The sum of row %d is: %d\n", i+1, rowSumTemp);
	}
	
	/*sum of Columns*/
	for(int i=0; i<SIZE; i++)
	{
		colSumTemp = 0;
		
		for(int j=0; j<SIZE; j++)
		{
			colSumTemp = colSumTemp + matA[j][i];
			
			/*
			 *	matA[row][col]
	         *  col is constant and row is changing matA[j][i]
			 *
			 */

		}
		
		printf("The sum of column %d is: %d\n", i+1, colSumTemp);
	}
	
	
	return 0;
}