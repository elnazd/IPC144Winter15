#include<stdio.h>
#define SIZE 30
void display(int s[], int n);
int main()
{
	//define an array of size SIZE
	int s[SIZE];
	
	//prompt each student to input their grades
	//initialize the array 
	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("Grade?");
		scanf("%d",&s[i]);	
	
	}
	
	//calling display
	display(s,SIZE);

}
//This function takes an array of integers
//and the size of the array
//and displays the array
void display(int s[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("student %d = %d\n",i,s[i]);
	}

}