/*Write a program to take two integers from the user and magnifies them. 
This program passes the numbers to a function called  magnify.
This function multiplies the integers by two.
*/
#include<stdio.h>
void magnify(int *a, int *b);

int main()
{
	int num1,num2;
	//take two integers from the user:
	printf("Please input two integers:");
	scanf("%d%d",&num1,&num2);//10  20
	
	printf("Calling the magnify function and passing the addresses...\n");
	//Calling the function and passing by address
	magnify(&num1,&num2); 
	
	printf("After magnify: \n num1=%d num2=%d", num1,num2);
	
	return 0;

}

void magnify(int *a, int *b)
{

	*a = *a * 2;
	*b = *b * 2;	

}
