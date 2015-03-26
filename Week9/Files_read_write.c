//Write a program to read the content of note.txt
//write the content of note.txt to my_note.txt
#include<stdio.h>
#define SIZE 60
int main()
{
	char text[SIZE+1];
	//Read from note.txt
	FILE *fp=NULL;
	fp = fopen("note.txt","r");//open the file for reading

	if(fp!=NULL)
	{
		//process the file
		//read from the file 		
		fscanf(fp,"%[^\n]",text);
			
		fclose(fp);
	}
	else
		printf("Error in opening the file!");

	
	FILE *fptr=NULL;
	fptr = fopen("my_notes.txt","w");
	if(fptr!=NULL)
	{
		fprintf(fptr,"%s",text);
		fclose(fptr);
	}
	else
		printf("Error opening the file");

	return 0;

}
