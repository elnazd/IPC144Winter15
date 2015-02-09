/*Write a program to input 100 integers from the user. The user must input ‘0’ to exit.*/

#include<stdio.h>
int main()
{
	int i=0;//counter
	int number;
	
	do{
		printf("Please input an integer:");
		scanf("%d",&number);
		i++;
		
	}while(i<100 && number!=0);
	
	
	return 0;
}
