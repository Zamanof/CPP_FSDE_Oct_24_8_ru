#include<iostream>
#include"Student.h"

int main() {
	Student student1;
	student1.initialize("Ridan", "Vonamaz", 54);
	/*student1.show();*/

	cout << student1.getFirstName() << endl;
	student1.setFirstName("Salame");
	cout << student1.getFirstName() << endl;
	student1.setAge(-2);
	student1.show();

	cout << student1.getFirstName() << endl;
}