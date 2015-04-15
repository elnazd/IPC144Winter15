void graphCurrency(double currencyValues[ ], int nValues, int *largestDecrease);

int main( ) {
double cdn[12] = { 0.9542, 0.9398, 0.9176, 0.9041, 0.8999, 0.9089, 0.9176, 0.9232, 0.9325, 0.9152, 0.9092, 0.8912 };
int largestDecrease;

printf("CDN $ DECREASES FROM NOV. 2013 TO OCT. 2014\n");

graphCurrency(cdn, 12, &largestDecrease);

printf("The largest decrease is: %d\n", largestDecrease);
return 0;
}
/*The function displays a horizontal graph (using the * character) of the monthly changes in the value
of the Canadian dollar. The change in currency is calculated by subtracting consequtive pairs of array
values and multiplying the difference by 1000. Consequtive pairs of array elements are those that
follow each other (eg. array[0]– array[1], array[2]– array[3], array[4] – array[5], etc.).
This value is then converted to a whole number and used to display the graph for that calculation,
but only if the whole number value is greater than 0.
So, for example, if the first array value is 0.9542 and the second array value is 0.9398, then the change
in monthly currency is (0.9542–0.9398) * 1000 = 14.4.
This value (converted to 14), is then displayed on the screen followed by a space and a row of
14 asterisks (*) followed by a newline. This is repeated for all monthly changes*/

void graphCurrency(double currencyValues[ ], int nValues, int *largestDecrease){

//Step1: subtracting consecutive pairs of array values and multiplying the difference by 1000
//Step 2: print stars based on the results of temp

	int i;
	*largestDecrease = 0;
	
	for(i=0;i<nValues-1;i++)
	{
		int temp;
		temp = (currencyValues[i] - currencyValues[i+1])*1000;
		
		//finding the largestDecrease:
		if(temp > *largestDecrease)
			*largestDecrease=temp;
		
		printf("%d",temp);
		//Step 2: print stars based on the results of step1
		int j;
		for(j=0;j<temp;j++)
			printf("*");
			
		printf("\n");	
	
	}

}
