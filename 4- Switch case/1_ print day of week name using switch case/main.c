/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.22
 * Topic        : C program to print day of week name using switch case
 *********************************************/
 
 
#include <stdio.h>
 
 
int main()
{
	int dayNum;
	
	
	printf("Enter the number of the day in the weak (1-7) to display its name: ");
	fflush(stdout);
	scanf("%d", &dayNum);
	
	switch(dayNum)
	{
		case 1: printf("Sunday");
				break;
				
		case 2: printf("Monday");
				break;
				
		case 3: printf("Tuesday");
				break;
				
		case 4: printf("Wednesday");
				break;
				
		case 5: printf("Thursday");
				break;
				
		case 6: printf("Friday");
				break;
				
		case 7: printf("Saturday");
				break;
				
		default: printf("Please enter a valid number (1-7)");
	}
	
	return 0;
}
 
 