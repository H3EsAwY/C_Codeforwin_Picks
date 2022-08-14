/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.22
 * Topic        : check whether triangle is equilateral, scalene or isosceles
 *********************************************/
 
/* Note: This code doesn't check if the triangle is valid from the length if its sides */
 
#include <stdio.h>

int main()
{
	
	
	int s1,s2,s3;
	
	printf("Enter the first side: ");
	fflush(stdout);
	scanf("%d", &s1);
	
	printf("Enter the second side: ");
	fflush(stdout);
	scanf("%d", &s2);
	
	printf("Enter the third side: ");
	fflush(stdout);
	scanf("%d", &s3);
	
	
	
	if(s1==s2 && s1==s3)
	{
		printf("The triangle is an equilateral triangle");
	}
	else if( s1==s2 || s1==s3 || s2==s3 )
	{
		printf("The triangle is an isosceles triangle");
	}
	else
	{
		printf("The triangle is an scalene triangle");
	}
	
	
	
	return 0;
}