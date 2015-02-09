/*Write a program to prompt the user to input an integer. 
Your program should check
if the input value is an even number and also it’s greater than 20, you print “Valid!”
Otherwise, if the input value is an odd number or less than 20 , you print “Invalid!”*/

#include<stdio.h>
int main()
{
	int input;
	printf("Please input an even number greater than 20:\n");
	scanf("%d",&input);
	//if the input value is an even number and also it’s greater than 20, you print “Valid!”
	if(input%2 ==0 && input>20)
		printf("Valid!");
		//Otherwise, if the input value is an odd number or less than 20 , you print “Invalid!
	else if(input%2==1 || input<=20)
		printf("Invalid!");
		
	return 0;
}









