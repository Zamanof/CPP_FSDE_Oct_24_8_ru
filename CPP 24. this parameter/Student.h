#pragma once
#include<iostream>

using namespace std;
class Student
{
private:
	char firstName[50];
	char lastName[50];
	int age;
public:
	// constructor - eto metod kotoriy vizivayetsya pri sozdanii obyekta

	// deafault(parameterless) constructor
	Student() {
		strcpy_s(firstName, 50, "Empty");
		strcpy_s(lastName, 50, "Empty");
		age = 0;
	}

	// parameterized constructor
	Student(const char* firstName, const char* lastName, int age) {
		setFirstName(firstName);
		setLastName(lastName);
		setAge(age);
	}

	// parameterized constructor
	Student(const char* firstName, const char* lastName) {
		setFirstName(firstName);
		setLastName(lastName);
		setAge(18);
	}

	void show();



	void setFirstName(const char*);
	char* getFirstName();


	void setLastName(const char*);
	char* getLastName();


	void setAge(int);
	int getAge();

};
