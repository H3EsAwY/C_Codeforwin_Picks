/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.08.22
 * Date Started : 2022.08.22
 * Topic        : 40. C program to check symmetric matrix
 *********************************************/
  
#include <stdio.h>

#define SIZE 3


#define FALSE 0
#define TRUE  1


int main()
{
	int matA	[SIZE][SIZE];
	int matTrn	[SIZE][SIZE];
	
	int isSymm=1;
	/* We assume that it is symmetric at first*/
	

	printf("\n----- C program to check symmetric matrix (3x3) -----\n\n");
	
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
	 *	To transpose a matrix, 
	 *	make every row in matA a col in matTrn
	 *	and  every col in matA a row in matTrn
	 *
	 *  so we have to access the matrix A an a constant column manner.
	 *  i.e the col is constant and row is changing
	 *  
	 *  and store what we see in matTrn in a constant row manner
	 *  
	 *  if matA == matTrn then we have a symmetric matrix
	 */
	
	for(int i=0; i<SIZE; i++)
	{
		for(int j=0; j<SIZE; j++)
		{
			matTrn[i][j] = matA[j][i];
		}
	}
	
	/*checking symmetry between matA and  matTrn*/
	
	for(int i=0; i<SIZE; i++)
	{
		for(int j=0; j<SIZE; j++)
		{
			if(matA[i][j] != matTrn[i][j])
			{
				isSymm=0;
				break;
			}
		}
	}
	
	if(isSymm == 1)
	{
		printf("\nThe matrix you have entered is symmetric!! \n");
	}
	else
	{
		printf("\nThe matrix you have entered is NOT symmetric. \n");
	}
	
	return 0;
}