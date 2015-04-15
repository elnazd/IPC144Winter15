/*Consider a text file named  winter.txt 
	Light Jacket
	Long-Sleeved Shirts 
	Large Skateboards

Each record describes a specific item and the quantity of that item.
Determine the number of records.
*/

#include<stdio.h>
#define SIZE 60
int main()
{
	char item[SIZE+1];
	int counter=0; //number of records
	
	FILE *fp=NULL;
	fp = fopen("winter.txt","r");
	
	if(fp!=NULL){
	
		while(!feof(fp))
		{ 
			fscanf(fp,"%60[^\n]%*c",item);	
			counter++;  
		}
		//where is fp pointing to? EOF
		
		

		fclose(fp);
	}
	else
		printf("Error in opening the file!");
	
	printf("There are %d records in this file",counter);

}
