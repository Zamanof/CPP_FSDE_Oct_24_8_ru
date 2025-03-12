#include "Student.h"
void Student::show() {
	cout << "FirstName:  " << this->firstName << endl;
	cout << "LastName:   " << this->lastName << endl;
	cout << "Age:        " << this->age << endl;
}



void  Student::setFirstName(const char* firstName) {
	if (strlen(firstName) <= 2) {
		cout << "Name length must be 2 symbols or more\n\n";

	}
	else {
		strcpy_s(this->firstName, 50, firstName);
	}
}

char* Student::getFirstName() {
	return firstName;
}


void  Student::setLastName(const char* lastName) {
	if (strlen(lastName) <= 2) {
		cout << "Lastname length must be 2 symbols or more\n\n";

	}
	else {
		strcpy_s(this->lastName, 50, lastName);
	}
}

char* Student::getLastName() {
	return this->lastName;
}


void Student::setAge(int age) {
	if (age < 0) {
		cout << "incorrect value for age\n\n" << endl;
	}
	else {
		this->age = age;
	}
}

int Student::getAge() {
	return this->age;
}