/*
Write a function that takes two integers: base, and power. Then, the function calculates the result of raising the base to the power. 

*/
#include<stdio.h>
int computePower(int base, int exp);

int main()
{
	int base, exponent,result;
	printf("Please input base and exponent:");
	scanf("%d%d",&base,&exponent);
	
	//Calling the function and passing the values
	result = computePower(base,exponent);//computePower(2,3)
	printf("The result is:%d", result);
}

/*
this function takes two integers: base, and power. 
Then, the function calculates and returns the result of raising the base to the power. 
*/

int computePower(int base, int exp)
{
	int result=1,i;
	for(i=0;i<exp;i++)
	{
		result = result * base;	
	}

	return result;
}








