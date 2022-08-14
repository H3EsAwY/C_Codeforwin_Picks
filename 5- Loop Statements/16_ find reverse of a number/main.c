/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.23
 * Topic        : C program to find reverse of a number
 *********************************************/
 
    
#include <stdio.h>


int main()
{
	int num,tempVal;
	int lastDig;
	int reverseNum=0; 
	
	/*it's important to set the initial value of reverseNum to 0 */
	
	
	printf("Enter a number to print its reverse: ");
	fflush(stdout);
	scanf("%d", &num);
	
	tempVal=num;
	
	
	while(tempVal!=0)
	{
		lastDig=tempVal%10;
		reverseNum = reverseNum * 10 + lastDig;
		
		/*to change the last digit to be second (nth) to last, we have to remove a digit from the number, thus we divide be 10*/
		tempVal = tempVal/10;
		
		/* 
		 * Note that reverseNum in the first iteration will have a value of 0, thus [reverseNum = reverseNum * 10 + lastDig]
		 * will only add lastDig to be the first dig in the new reversed number
		 */
		 
		 /* the value of lastDig changes in every iteration, eventually it will have the value of the first digit in num*/
	}
	
	
	
	printf("The reverse of %d is %d ", num, reverseNum);


	return 0;
}