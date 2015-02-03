/*Write a program to create the following shape:
*                    
***                  
*****                 
*******              
********* 
*/

#include<stdio.h>

#define ROW 5 //This value can change to resize the triangle

int main()
{
	int i; //row counter
	int j; //column counter
	int k=1;
	for(i=0;i<ROW;i++){
	
		for(j=0;j<k;j++)
			printf("*");
				
		k+=2;
		printf("\n");
	}

	return 0;
}
