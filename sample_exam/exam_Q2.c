struct Book {
	char name[31];
	char author[60];
	int publishYear;
};

int recordNum(struct Book books[], char *name);
/*This function accepts an array of Books
and the address of a string that holds the name of a file containing data records
in the following format:

Persuasion:Jane Austen:1818
Les Miserables:Victor Hugo:1862
Emma:Jane Austen:1815
Frankenstein:Mary Shelley:1818
*/

//This function reads through the file one line at a time and returns the number of books in the file.

int recordNum(struct Book books[], char *name)
{
//step 1: open the file using the name

	File *fptr = fopen(name,"r");
	int i=0;
	if(fptr!=NULL){
		
		//step 2: read the file and count the number of records
		//Persuasion:Jane Austen:1818
		/*
		char temp[60];
		while(!feof(fptr))
			fscanf(fptr,"%[^\n]%*c",temp));
			i++;
		}
		
		*/
		
		while(3 == fscanf(fptr,"%[^:]:%[^:]:%d%*c",
			books[i].name,books[i].author,
			&books[i].publishYear)){
		
			i++;
		}
			
	}
	else
	{
		printf("Error in opening the file!");
	}


//step 3: return the number of records

	return i;

}

int search(struct Book books[], char *oneBook, int size)
{
//this function takes the name of the book and an array of books. This function looks for the book. It  returns the number of books found.

	int i;
	int result=0;//number of books found
	
	for(i=0; i<size; i++)
	{
		if(strcmp(books[i].name,oneBook)==0)
			result++;
	}

	return result;
}

int searchDate(struct Book books[], int year)
{
//this function takes the name of the book and a year. This function looks for the books published after the year. It  returns the number of books found.

	int i;
	int result=0;//number of books found
	
	for(i=0; i<size; i++)
	{
		if(books[i].publishYear >= year)
			result++;
	}

	return result;


}

