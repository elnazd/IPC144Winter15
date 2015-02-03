/*Write a program to print all positive EVEN numbers on the screen. starting from 2, ending 100
2 4 6 … 100.*/

#include<stdio.h>
int main()
{
	int i; //the counter
	for(i=2;i<100;i+=2)
		printf("%d ",i);

	return 0;
}
