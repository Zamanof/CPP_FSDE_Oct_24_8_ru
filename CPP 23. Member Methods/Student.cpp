#include "Student.h"
#include<iostream>
using namespace std;

void Student::info() {
	cout << "FirstName:  " << firstName << endl;
	cout << "LastName:   " << lastName << endl;
	cout << "Age:        " << age << endl;
	cout << "Marks:" << endl;
	for (size_t i = 0; i < 5; i++)
	{
		cout << marks[i] << " / ";
	}
	cout << '\n';
	cout << "Average:    " << average() << endl;
	cout << "\n\n";
}

float Student::average() {
	float summ{};
	for (size_t i = 0; i < 5; i++)
	{
		summ += marks[i];
	}
	return summ / 5;
}
