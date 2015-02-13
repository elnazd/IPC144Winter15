#include<stdio.h>
int main()
{
	int a=10;
	printf("The value of a is:%d\n",a); 
	printf("The address of a is:%x\n",&a); 
	
	int *b=&a;
	printf("The value of b is:%d\n",*b);
	
}