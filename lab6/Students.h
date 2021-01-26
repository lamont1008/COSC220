//Kyle Jenifer
//10/29/2020

#ifndef STUDENTS_H
#define STUDENTS_H

// definition of the Struct Type Students
struct Students {
	char lastName[20]; // student lastname
	char firstName[20]; // student's firstname
	int idNumber; // student ID
	Students(); // constructor
	void printStudent(); // print a student infomation
};


#endif
