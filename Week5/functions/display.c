/*Write a function called display() that prints integers from 1 to 100*/
#include<stdio.h>
void display();
int main()
{
	//Calling the function
	display();

}

void display()
{
	int i;
	for(i=0;i<100;i++)
		printf("%d ",i);
}