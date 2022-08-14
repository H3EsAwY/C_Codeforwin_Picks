/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.08.10
 * Date Started : 2022.08.10
 * Topic        : C program to find diameter, circumference and area of circle using function
 *********************************************/

#include <stdio.h>


#define MATH_PI 3.14159265358979323846


double getDiameter (double rad);
double getCircum   (double rad);
double getArea     (double rad);


int main()
{
	
	double rad,diam,circum,area;
	
	printf("Please enter circle radius to find diameter, circumference and area: ");
	fflush(stdout);
	scanf("%lf", &rad);
	
	diam   = getDiameter (rad);
	circum = getCircum   (rad);
	area   = getArea     (rad);
	
	printf("\nA circle of radius [%.2lf] has:\n\n", rad);
	
	printf("A diameter of [%.2lf]:\n", diam);
	printf("A circumference of [%.2lf]:\n", circum);
	printf("An area of [%.2lf]:\n", area);
	
	
	return 0;
}

double getDiameter (double rad)
{
	return (2*rad);
}

double getCircum   (double rad)
{
	
	return (2*MATH_PI*rad);
}

double getArea     (double rad)
{
	
	return (MATH_PI*rad*rad);
}


