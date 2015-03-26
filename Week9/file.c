//This program reads from a file note.txt
//Make sure you have note.txt in the same directory

#include<stdio.h>
#define SIZE 60
int main()
{
	FILE *fp=NULL;
	fp = fopen("note.txt","r");//open the file for reading
	
	char content[SIZE+1];
	if(fp!=NULL)
	{
		//process the file
		//read from the file 		
		fscanf(fp,"%[^\n]",content);
		printf("%s",content);
		
		fclose(fp);
	}
	else
		printf("Error in opening the file!");

	return 0;

}
