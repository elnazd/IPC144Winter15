//Pell numbers

//define an array
//initialize the array
//display the array

#include<stdio.h>
#define SIZE 100
void display(long s[], int n);

int main()
{
	//define an array
	long p[SIZE],i;
	
	//initialize the array  using the formula
	p[0]=0;
	p[1]=1;
	
	for(i=2;i<SIZE;i++)
	{
		p[i]=2*p[i-1] + p[i-2];	
	}

	//display the array
	display(p,SIZE);
	
	
}

void display(long s[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("student %d = %lu\n",i,s[i]);
	}

}