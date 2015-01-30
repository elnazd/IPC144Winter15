/*Write a program to print  1000 stars onto the display.
*/

#include<stdio.h>
int main()
{
	int counter=0; //step 1: define a counter
	while(counter<1000) //step 2: check the condition
	{
		printf("*");
		counter++; //counter = counter +1; //step 3: increment the counter
	}	

	return 0;
}
