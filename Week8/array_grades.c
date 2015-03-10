#include<stdio.h>
int main()
{
	//define an array of size 4
	//initialize the array 
	int s[4]={20,13,15,40};
	s[1]=25;	
	
	//display the array
	int i; //index
	for(i=0;i<4;i++)
	{
		printf("%d ", s[i]);	
	}


}