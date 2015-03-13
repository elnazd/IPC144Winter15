//This function searches for a value in an array and 
//if it finds the value, it prints the index of the value in the array
//otherwise, it prints a not found error 
//This function takes three arguments: an array, and the value that you're looking for, and the size of the array

void search(int a[], int value, int size)
{
	int i;
	int found=0; //found=0 means the value is not found
	
	for(i=0;i<size && !found;i++)
	{
		if(a[i]==value){
			printf("The index is=%d",i);
			found=1; //the value is found
		}
	}	
	if(found==0)
		printf("Error! No value found\n");
	
	

}
 
