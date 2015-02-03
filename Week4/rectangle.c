/*Write a program to create the following shape: 
*********
*********
*********
*********
********* 
*/

#include<stdio.h>

#define ROW 5
#define COL 9
int main()
{
	int i; //row counter
	int j; //column counter
	for(i=0;i<ROW;i++){
	
		for(j=0;j<ROW;j++)
			printf("*");
				
		printf("\n");
	}

	return 0;
}
