/*Define an array of size four, call it price and initialize it with these values: {12.34, 7.89, 6.56, 9.32}
Print all the elements of the array. 
*/
#include<stdio.h>
#define SIZE 4
#define TAX 0.13
 void display(float a[],int b[]);

int main()
{
	float price[SIZE]={12.34, 7.89, 6.56, 9.32};
	int sku[SIZE]={2156, 4633, 3122, 5611}; //(Stock Keeping Unit) 
	int tax[SIZE]={1,0,0,1};
	
	int i;
	float total=0; //total purchase price
	
	display(price,sku);
	//A customer buys one of each product.
	//Calculate the total purchase price, including 13% HST.
	
	for(i=0;i<SIZE;i++)
	{
		total = total + price[i] + (price[i]*tax[i]*TAX);
	}
/*	for(i=0;i<SIZE;i++)
	{
		if(sku[i]==4633 || sku[i]==3122)
			total = total + price[i];
		else
			total = total + price[i]+price[i]*TAX;
	}
	*/
	printf("The total is %.2lf",total);
	


}

//Print all the elements of the array.
void display(float a[],int b[])
{
	int i;
	for(i=0;i<SIZE;i++)
		printf("Item %d is %d and is %.2f\n",i,b[i],a[i]);

	//
}
