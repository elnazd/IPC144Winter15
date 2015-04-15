#include<stdio.h>

struct Student{ //derived type

	int student_number;
	char name[11];
	char grades[5];
	double phone;
};

int main()
{

	struct Student s1; //s1 is of type Student
	s1.student_number = 123456;
	s1.name = "harry";
	s1.grades ="AB";
	s1.phone = 456789;
	
	struct Student s2;
	//prompt the user to input information for s2
	printf("Please input information for s2");
	scanf("%d",&s2.student_number);
	scanf("%s",s2.name);
	scanf("%s",s2.grades);
	scanf("%lf",&s2.phone);
	
	
}

