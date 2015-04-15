/*The following file is given.
Make sure to download winter.txt

2;Light Jacket;95.89 
3;Long Pants;67.89 
2;Large Duster;45.98

Write a program to read records line by line and store the records.
*/

#include<stdio.h>
#define SIZE 60
int main()
{
	FILE *fp = fopen("winter.txt","r");
	int field1; //number of item
	char field2[SIZE+1]; //item
	float field3; //price
	
	if(fp!=NULL)
	{
		
		while(!feof(fp))
		{
			//While it's not EOF, process the file
			//2;Light Jacket;95.89 
			fscanf(fp,"%d;%[^;];%f%*c",&field1, field2, &field3);
			printf("number of items: %d  ",field1);
			printf("name of the item: %s  ",field2);
			printf("price: %.2f\n\n",field3);
		
		}
	
		fclose(fp);
	
	}
	else
		printf("File error!");

}

