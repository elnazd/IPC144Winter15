/*The area of a circle is given by the formula
Write a program to calculate the area of a circle.

define a variable to hold the area (a definition)
Prompt the user to input the radius
Scanf the radius
Calculate the area: area= 3.14 * radius * radius
Printf the area 
*/
#include<stdio.h>
#define PI 3.14
int main()
{
	//define the variables
	float radius,area;
	//const float pi = 3.14;
	
	//Prompt the user to input the radius
	printf("Please enter the radius: ");
	scanf("%f",&radius);
	
	//Calculate the area
	area= PI * radius * radius;
	
	//Printf the area 
	printf("The area is %.2f.\n",area);

	return 0;
}
