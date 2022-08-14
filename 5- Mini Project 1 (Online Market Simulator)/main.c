/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.07.27
 * Date Started : 2022.07.27
 *
 * Topic        : Mini Project 1 (Online Market Simulator) 
 * Version      : V1.0 List Pre-determined Items variation
 *
 *********************************************/
 
#include <stdio.h>


int main()
{
	char inputLetter;
	
	int numItems=0;
	int cart=0;
	int totalPrice=0; /*Before discounts*/
	float finalPrice=0.0; /*after discounts*/
	float discount=0;
	
	int shippingPrice=0;
	int overnightPrice=0;
	
	int finishFlag=0;
	
	printf("\n-------------- (Simple) Online Market Simulator --------------\n ");
	printf("\n--------------------- Welcome to our Store --------------------\n ");
	
	printf("\nNote that 2 items are required as a minimum for one order.\n ");

	
	
	while(finishFlag!=1)
	{
		
		printf("\n");
		printf("\n(A) [1$]  Chewing Gum");
		printf("\n(B) [3$]  Water Bottle");
		printf("\n(C) [5$]  Pepsi");
		printf("\n(D) [11$] Sugar");
		printf("\n(E) [13$] Cheese");
		printf("\n(F) [17$] Eggs");
		
		printf("\n\n(X) Finish Shopping and go to checkout\n ");
		
		printf("\nPlease choose an item or finish shopping..... (A/B/C/D/E/F/X): ");
		fflush(stdout);
		
		scanf("\n%c", &inputLetter);
		
		switch(inputLetter)
		{
			case 'a': 
			case 'A':
						cart+=1;			numItems++;
						printf("\nChewing Gum (1$) has been added to your cart. \nItems in cart = %d$\n",cart);
						break;
			case 'b':
			case 'B':
						cart+=3;			numItems++;
						printf("\nWater Bottle (3$) has been added to your cart.\nItems in cart = %d$\n",cart);
						break;
			case 'c':
			case 'C':
						cart+=5;			numItems++;
						printf("\nPepsi (5$) has been added to your cart.\nItems in cart = %d$\n",cart);					
						break;
			case 'd':
			case 'D':
						cart+=11;			numItems++;
						printf("\nSugar (11$) has been added to your cart.\nItems in cart = %d$\n",cart);					
						break;
			case 'e':
			case 'E':
						cart+=13;			numItems++;
						printf("\nCheese (13$) has been added to your cart.\nItems in cart = %d$\n",cart);					
						break;
			case 'f':
			case 'F':
						cart+=17; 			numItems++;
						printf("\nEggs (17$) has been added to your cart.\nItems in cart = %d$\n",cart);					
						break;
						
			case 'x':
			case 'X':	if(numItems>=2)
						{
							printf("\n\nFinishing Order ..... \nProceeding to checkout....\n ");
							finishFlag=1;
						}
						else
						{
							printf("2 items are required as a minimum for one order.\nCurrent Number of Items in cart: %d\n",numItems);
						}
						break;
						
						
			
			default: printf("Please Enter A Valid Letter (Invalid Input) \n");
					
		}
	
	}
	
	printf("\nYou have %d items in the cart with a total of %d$\n",numItems,cart);
	printf("\nDo you want overnight shipping for the order for an extra 5$? (Y/N): ");
	fflush(stdout);
	scanf(" %c", &inputLetter);
	
	if( (inputLetter == 'Y') || (inputLetter == 'y') )
	{
		overnightPrice=5;
		printf("Overnight Shipping Selected\n");
	}
	else 
	{
		overnightPrice=0;
		printf("Normal Shipping Selected\n");
	}
	
	if(cart<=10)
		shippingPrice = 2;
	
	else
		shippingPrice = 3;
	
	
	totalPrice = cart + shippingPrice + overnightPrice;
	
	printf("-------------------- Invoice --------------------\n");
	printf("Total price of items in cart: %d$\n", cart);
	printf("Normal Shipping Price: %d$\n", shippingPrice);
	printf("Overnight Shipping Price: %d$\n", overnightPrice);
	printf("Total Price before discounts: %d$\n", totalPrice);

	if(numItems>=5)
	{
		printf("[>= 5 items] A discount of 20 %% has been applied :) \n");
		discount=0.2*totalPrice; 
		finalPrice = (float)totalPrice - discount;
	}
	else
	{
		printf("[< 5 items] You did not qualify for a discount :( \n");
		finalPrice = (float)totalPrice;
	}

	printf("\nFinal price after applying discounts: %.2f$",finalPrice);
	
	
	return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
