/*Write a C program that prompts the user to enter the amount of cash in their pockets, accepts the user's input, and displays the amount in the format shown below.  If the user has entered 4.52, your program displays*/

#include<stdio.h>

int main()
{
	//define the variables
	float cash;
	
	//Prompt the user to input the cash
	printf("Please enter the cash: ");
	scanf("%f",&cash);
		
	//Print the amount of cash in their pockets
	printf("The amount of cash in your pocket is $%.2f\n",cash);

	return 0;
}
