/*
Make sure to download info.txt
step1: Define Struct Employee
Each triple consists of 
	an employee number
	an employee name 
	a salary. 
	
step2: in main(), define 100 employees

step3:
input the data for 100 employees
*/

//step1:
#include<stdio.h>
#define SIZE 2
struct Employee{

	int number;
	char name[31]; 
	float salary;
};

void display(struct Employee s[]);

int main()
{
	struct Employee emp[SIZE];
	//Step 3: scanf information for all employees from info.txt
	FILE *fp = fopen("info.txt","r");
	if(fp!=NULL){
	
		//123;harry;45000
		
		int i=0;
		
		while(!feof(fp)) //EOF
		{
			fscanf(fp,"%d;%[^;];%f\n",&emp[i].number,emp[i].name, &emp[i].salary);
			i++;
		}
		
		
		/*int i;
		for(i=0;i<SIZE && !feof(fp);i++){
			fscanf(fp,"%d;%s;",&emp[i].number,emp[i].name, &emp[i].salary);
		}*/
		
		fclose(fp);
	}else
		printf("Error!");
	
	display(emp);
}

void display(struct Employee s[])
{
	int i;
	for(i=0;i<SIZE;i++)
		printf("%d  %s  %f\n",s[i].number,s[i].name, s[i].salary);

}


