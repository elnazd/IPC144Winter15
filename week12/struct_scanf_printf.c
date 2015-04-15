#include<stdio.h>
#define SIZE 2
void display(struct Student s[]);

struct Student{ //derived type
	int student_number;
	char name[11];
	char grades[5];
	double phone;
};
int main()
{

	struct Student s[SIZE];//an array of struct student
	//prompt the user to input information for all the students
	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("student number:");
		scanf("%d",&s[i].student_number);
		
		printf("student name:");
		scanf("%s",s[i].name);
		
		printf("student grades:");
		scanf("%s",s[i].grades);
		
		printf("student phone:");
		scanf("%lf",&s[i].phone);
	
	}

	display(s);
}
//Display information for each student in an informative format
void display(struct Student s[])
{
	int i;
	for(i=0;i<SIZE;i++)
		printf("Student number:%d name:%s grades:%s phone:%lf\n",s[i].student_number,s[i].name,s[i].grades,s[i].phone);

}

