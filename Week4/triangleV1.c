/*Write a program to create the following shape:
*                    
**                  
***                 
****              
***** 

*/

#include<stdio.h>

#define ROW 5 //This value can change to resize the triangle

int main()
{
	int i; //row counter
	int j; //column counter
	for(i=0;i<ROW;i++){
	
		for(j=0;j<i+1;j++)
			printf("*");
				
		printf("\n");
	}

	return 0;
}
