/*Write a program to input a string from the user. Reverse the string. Display the results.
input: hello
output: olleh
*/

#include<stdio.h>
#include<string.h>
#define SIZE 60
void reverse(char reversed_str[] , char str[]);

int main()
{
	char str[SIZE+1];
	char reversed_str[SIZE+1];
	//prompt the user to input a string
	printf("Please enter a string");
	
	scanf("%[^\n]",str); //My name is Arnold
	reverse(reversed_str,str);
	
	printf("the reversed string is: %s",reversed_str);
	
	
	return 0 ;
}

void reverse(char reversed_str[] , char str[])
{
	int i,length;
	
	length = strlen(str);
	
	reversed_str[length]='\0';
	
	for(i=0;i<length;i++)
		reversed_str[length-i-1]=str[i];


}
