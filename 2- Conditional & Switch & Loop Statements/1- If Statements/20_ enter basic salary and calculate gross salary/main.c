/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.22
 * Topic        : input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
 *********************************************/
 
 
#include <stdio.h>
 
 
 
int main()
{
	
	/*
		Basic Salary <= 10000 : HRA = 20%, DA = 80%
		Basic Salary is between 10001 to 20000 : HRA = 25%, DA = 90%
		Basic Salary >= 20001 : HRA = 30%, DA = 95%
	*/
	/*
		HRA: house rent allowance
		DA:  dearness allowance (to counteract inflation or something)
	*/
	int basicSal,grossSal,HRA,DA;
	
	printf("Enter basic salary of an employee to find gross salary: ");
	fflush(stdout);
	scanf("%d", &basicSal);
	
	if(basicSal <= 10000)
	{
		HRA = 0.2*basicSal;
		DA  = 0.8*basicSal;
	}
	else if( basicSal > 10000 && basicSal <= 20000)
	{
		HRA = 0.25*basicSal;
		DA  = 0.90*basicSal;
	}
	else
	{
		HRA = 0.3*basicSal;
		DA  = 0.95*basicSal;
	}
	
	grossSal = basicSal + HRA + DA;
	
	printf("The gross salary of the employee is: %d", grossSal);

	return 0;
		
}