/*Write a program to print all positive ODD numbers on the screen. starting from 99, ending 1
99 97 95 … 1.*/

#include<stdio.h>
int main()
{
	int i; //the counter
	for(i=99;i>=1;i-=2)
		printf("%d ",i);

	return 0;
}
