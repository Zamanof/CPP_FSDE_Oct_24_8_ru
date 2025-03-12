#include "Student.h"
void Student::show() {
	cout << "FirstName:  " << _firstName << endl;
	cout << "LastName:   " << _lastName << endl;
	cout << "Age:        " << _age << endl;
}



void  Student::setFirstName(const char* firstName) {
	if (strlen(firstName) <= 2) {
		cout << "Name length must be 2 symbols or more\n\n";

	}
	else {
		strcpy_s(_firstName, 50, firstName);
	}
}

char* Student::getFirstName() {
	return _firstName;
}


void  Student::setLastName(const char* lastName) {
	if (strlen(lastName) <= 2) {
		cout << "Lastname length must be 2 symbols or more\n\n";

	}
	else {
		strcpy_s(_lastName, 50, lastName);
	}
}

char* Student::getLastName() {
	return _lastName;
}


void Student::setAge(int age) {
	if (age < 0) {
		cout << "incorrect value for age\n\n" << endl;
	}
	else {
		_age = age;
	}
}

int Student::getAge() {
	return _age;
}
