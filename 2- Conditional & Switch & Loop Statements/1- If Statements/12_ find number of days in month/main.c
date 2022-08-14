/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.22
 * Topic        : C program to find number of days in month
 *********************************************/
 
#include <stdio.h>


int main()
{
	/*
	
								Month															Total days
	
	1.31January, 3.31March, 5.31May, 7.31July, 8.31August, 10.31October, 12.31December			31 days
	2.28February																				28/29 days
	4.30April, 6.30June, 9.30September, 11.30November											30 days
		
	*/
	
	/*you can do it the boring way with or logical operator and else ifs*/
	
	/* or do it the interesting way with an array*/
	
	int monthNum;
	int daysInMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	printf("Enter the number of month (1-12) to check how many days it has: ");
	fflush(stdout);
	
	scanf("%d", &monthNum);
	
	if(monthNum == 2)
	{
		printf("%d or 29 days if it's a leap year",daysInMonth[monthNum-1]);
	}
	else if(monthNum >=1 && monthNum<=12)
	{
		printf("%d days",daysInMonth[monthNum-1]);
	}
	else
	{
		printf("Please enter a valid month number (1-12)");
	}
	
	

	
	return 0;
}
 