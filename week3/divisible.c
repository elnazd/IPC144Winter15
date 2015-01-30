/*Write a program to prompt the user to input an integer. 
Your program should specify if the input value is an even or an odd number. Then, print a suitable message.
An even number is divisible by 2. An odd number is not divisible by 2. 
*/
#include<stdio.h>
int main()
{
	int number;
	printf("Please input a number:");
	scanf("%d",&number);
	
	if(number%2==0)
	{
		printf("The number is divisible by 2!\n");
	}
	else
	{
		printf("The number is not divisible by 2!\n");
	}
	return 0;
}