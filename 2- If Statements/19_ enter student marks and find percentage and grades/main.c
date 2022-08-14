/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.22
 * Topic        : input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
 *********************************************/
 
 
#include <stdio.h>
 
 int main()
 {
	int phy,chem,bio,math,comp;
	float num=5;
	float avg;
	
	printf("Enter the Physics grade: ");
	fflush(stdout);
	scanf("%d", &phy);
	
	printf("Enter the Chemistry grade: ");
	fflush(stdout);
	scanf("%d", &chem);
	
	printf("Enter the Biology grade: ");
	fflush(stdout);
	scanf("%d", &bio);
	
	printf("Enter the Mathematics grade: ");
	fflush(stdout);
	scanf("%d", &math);
	
	printf("Enter the Computer grade: ");
	fflush(stdout);
	scanf("%d", &comp);
	
	avg = ( phy + chem + bio + math + comp) / num;
	
	printf("Percentage: %.2f \n",avg);
	
	if(avg>=90)
		printf("Grade: A");
		
	else if(avg>=80)
		printf("Grade: B");
		
	else if(avg>=70)
		printf("Grade: C");
		
	else if(avg>=60)
		printf("Grade: D");
		
	else if(avg>=40)
		printf("Grade: E");
		
	else
		printf("Grade: F");
		
		
	return 0;
 }