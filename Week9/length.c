/*Write a program that prompts the user to input a string, (whitespaces allowed) 
Add code to:
step1-allocate memory for the string
step2-Scanf the string from the user
step3-pass the string to the length() function
step4-in the length() function, count the number of characters in the string.
Pass the length of the string to the main function and display it.
*/
#include<stdio.h>
#define SIZE 30
int main()
{
	//step1
	char input[SIZE+1];
	//step2
	printf("Please input a string:");
	scanf("%30[^\n]",input);

	//step3
	int length = str_length(input);
	printf("The length of the string is %d",length);
	
	return 0;

}

int str_length(char a[])
{
	int i;
	int length=0;
	for(i=0;a[i]!='\0';i++)
		length++;
		
	return length;

}


