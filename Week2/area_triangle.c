//In this program, we propmpt the user to input height and base of a triangle. Then, we calculate the area of the triangle.

#include<stdio.h>
int main(){

	float height,base,area; //variable deceleration
	
	//Prompting the user
	printf("Please input height:\n");
	scanf("%f",&height);
	
	printf("Please input base:\n");
	scanf("%f",&base);
	
	//calculations
	area = (height * base)/2;
	
	printf("This is the area:%f.\n",area);
	printf("Good bye!\n");
	return 0;
}
