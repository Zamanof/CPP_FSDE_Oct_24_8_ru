#pragma once
#include<iostream>
using namespace std;
class Student
{
private:
	char _firstName[50] = "Empty";
	char _lastName[50] = "Empty";
	int _age = 0;
public:
	void show();
	void initialize(const char*, const char*, int);

	// setter - mutator
	void setFirstName(const char*);
	// getter - accessor
	char* getFirstName();

	// setter - mutator
	void setLastName(const char*);
	// getter - accessor
	char* getLastName();

	// setter - mutator
	void setAge(int);
	// getter - accessor
	int getAge();

};

