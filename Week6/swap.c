/*Write a program to take two integers from the user and pass them to a function called swap. This function swaps the integers .*/
#include<stdio.h>
void swap(int *a, int *b);

int main()
{

	int num1,num2;
	//take two integers from the user:
	printf("Please input two integers:");
	scanf("%d%d",&num1,&num2);//10  20
	printf("The numbers you entered are:\n num1:%d, num2:%d\n",num1, num2);
	printf("Calling the swap function and passing addresses...\n");
	
	swap(&num1,&num2);
	
	printf("After swap: num1:%d, num2:%d",num1, num2);


}

void swap(int *a, int *b)
{
	int temp;
	temp = *a; //temp = num1
	*a = *b; //num1 = num2
	*b = temp; //num2 = temp
}
