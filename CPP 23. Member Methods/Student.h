#pragma once
class Student
{
public:
	// member fields
	char firstName[30];
	char lastName[30];
	int age;
	float marks[5];

	// methods - member functions
	void info();

private:
	float average();
};

