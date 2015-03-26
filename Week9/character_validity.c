//This program checks if character is a letter of alphabet. If character is not a letter of alphabet then the program prints an error massage;

#include<stdio.h>
int main()
{
	char character;
	//prompt the user to input a char
	printf("Please input a letter of alphabet:");
	scanf("%c",&character);

	if((character>='A' && character<='Z') || (character>='a' && character<='z'))
		printf("The input is valid");
	else
		printf("The input is not valid.");

}
