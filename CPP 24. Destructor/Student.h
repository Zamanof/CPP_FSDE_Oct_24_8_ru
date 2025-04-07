#pragma once
#include<iostream>

using namespace std;
class Student
{
private:
	char _firstName[50];
	char _lastName[50];
	int _age;
public:
	// constructor - eto metod kotoriy vizivayetsya pri sozdanii obyekta

	// deafault(parameterless) constructor
	Student() {
		strcpy_s(_firstName, 50, "Empty");
		strcpy_s(_lastName, 50, "Empty");
		_age = 0;
		cout << "Student "<<_firstName<< " is constructed with default constructor - Student()" << endl;
	}

	// parameterized constructor
	Student(const char* name, const char* surname, int age) {
		setFirstName(name);
		setLastName(surname);
		setAge(age);
		cout << "Student " << _firstName << " is constructed with parametrized constructor - Student(const char* name, const char* surname, int age)" << endl;
	}

	// parameterized constructor
	Student(const char* name, const char* surname) {
		setFirstName(name);
		setLastName(surname);
		setAge(18);
		cout << "Student " << _firstName << " is constructed with parametrized constructor - Student(const char* name, const char* surname)" << endl;
	}

	void show();



	void setFirstName(const char*);
	char* getFirstName();


	void setLastName(const char*);
	char* getLastName();


	void setAge(int);
	int getAge();
	
	// Destructor eto metod kotoriy vizivayetsya pri smerti obyekta
	~Student()
	{
		cout << "Student " << _firstName << " is destructed" << endl;
	}
};

