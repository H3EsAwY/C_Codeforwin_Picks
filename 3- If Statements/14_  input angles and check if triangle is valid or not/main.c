/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.22
 * Topic        : Check whether triangle is valid or not if angles are given
 *********************************************/
 
 
#include <stdio.h>
 
int main()
{
	
	int a1,a2,a3,sum;
	
	printf("Enter the first angle: ");
	fflush(stdout);
	scanf("%d", &a1);
	
	printf("Enter the second angle: ");
	fflush(stdout);
	scanf("%d", &a2);
	
	printf("Enter the third angle: ");
	fflush(stdout);
	scanf("%d", &a3);
	
	sum = a1 + a2 + a3;
	if( sum == 180 )
	{
		printf("\nThe triangle valid with angles of sum 180 degrees");
	}
	else if ( sum > 180 )
	{
		printf("\nThe triangle NOT valid with angles of sum > 180 degrees");
	}
	else if ( sum < 180 )
	{
		printf("\nThe triangle NOT valid with angles of sum < 180 degrees");
	}
	
	return 0;
}