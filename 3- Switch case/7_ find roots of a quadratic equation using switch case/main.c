/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.24
 * Date Started : 2022.07.22
 * Topic        : C program to print day of week name using switch case
 *********************************************/
 
 
#include <stdio.h>
#include <math.h>



int main()
{
	float a,b,c;
	float disc; /*discriminant*/ 
	float root1,root2,imag;
	
	printf("Enter the values of (a, b, c) of the quadratic equation (aX^2 + bX + c): ");
	fflush(stdout);
	scanf("%f%f%f", &a, &b, &c);
	
	disc = b*b - 4*a*c;
	
	
	/* to find the roots we have 3 cases, if disc is +ve , 0 , -ve */
	/* we are going to implement it with a switch */
	
	/*
		switch(disc>0) evaluates to true (1) or false (0)
		--->> if true then apply the equation 
		if false, it branches into disc =0 and disc<0
		so we make a nested switch (case 0 )
		
		switch (disc<0)
		-->> if true we apply the negative equation
		-->> if false we apply the 0 equation
	*/
	
	switch(disc>0)
	{
		case 1: /* +ve disc, real unequal roots */
				root1 = (-b + sqrt(disc)) / (2*a);
				root2 = (-b - sqrt(disc)) / (2*a);
				
				printf("Two real distinct roots exists,\n root1 = %.2f \n root2 = %.2f",root1,root2);
				
				break;
				
		case 0: /*-ve or 0*/
				
				switch(disc<0)
				{
					case 1: /* -ve disc, complex roots*/
							root1 = -b/(2*a);
							root2 = -b/(2*a);
							imag  = sqrt(disc)/(2*a);
							
							printf("Two complex distinct roots exists, \n root1 = %.2f + i %.2f \n root2 = %.2f - i %.2f",root1,imag,root2,imag);
							break;
							
					case 0: /* 0 disc, real equal roots*/
							root1 = root2 = -b/(2*a);
							printf("Two real equal roots exists,\n root1 = %.2f \n root2 = %.2f",root1,root2);
							break;
				}
				break;
		
	}
	
	
	return 0;
}