//Write a program to take a string from a user and copy it to a backup
#include<stdio.h>
#include<string.h>

#define SIZE 30
int main()
{
	char input[SIZE+1];
	char backup[SIZE+1];
	printf("Please input a string:");
	scanf("%30[^\n]",input);

	strcpy(backup,input);
	
	return 0;

}
