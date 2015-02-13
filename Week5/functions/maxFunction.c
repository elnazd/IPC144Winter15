/*Write a function that accepts two integers and returns the maximum of them.
For example, the maximum of 21 and 45 is 45.
*/
#include<stdio.h>
//declaring the functions
int maximum(int a, int b);

int main()
{
	int a,b,r;
	printf("Please enter two integers:");
	scanf("%d%d",&a,&b);
	
	//Calling maximum, passing the values
	r = maximum(a,b);
	printf("The maximum value is %d\n",r);

}

int maximum(int a, int b) //prototype 
{
	int result;
	if(a>b)
		result = a;
	else
		result = b;

	return result;
}



