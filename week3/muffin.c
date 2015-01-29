/*A muffin shop charges 60 cents per muffin. 
Write a program to ask the user to enter the number of muffins they wish to buy.  
Your program then calculates the cost of the muffins and the applicable taxes and print out the result.
less than 6 muffins is considered to be a luxury and taxable 6 or more muffins is considered to be groceries and not taxable.
*/

#include<stdio.h>
#define PRICE 0.60
#define TAX 1.13
int main()
{
	int number; //number of muffins
	float cost; //total cost
	
	printf("How many muffins would you like to buy?");
	scanf("%d",&number);
	
	if(number>=6)
	{
		cost= number * PRICE;
	}
	else
	{
		cost= number * PRICE * TAX;
	}
	
	printf("Total cost:%.2f",cost); //12.45
	
	
	return 0;
}
