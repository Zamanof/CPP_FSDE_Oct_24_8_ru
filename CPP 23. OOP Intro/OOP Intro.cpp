#include<iostream>

using namespace std;

struct Employee {
	char firstName[50];
	char lastName[50];
	int age;
};

class Human {
private:
	int age; // class fields - class member fileds

	// class methods - class member functions
	void init(){
		strcpy_s(firstName, 50, "Nadir");
		age = 45;
	}
protected :
	char firstName[50];
public:
	char lastName[50];
	void info() {
		init();
		cout << "Name:     " << firstName << endl;
		cout << "Surname:  " << lastName << endl;
		cout << "Age:      " << age << endl;
	}
};

int main() {
	// OOP - Object Oriented Paradigm (Programming)

	// C with classes -> C++

	// OOP Principles:
	// 1. Inheritance - Nasledovaniye
	// 2. Encapsulation - Inkapsulyasiya
	// 3. Polymorphism - Polimorfizm
	// 4. Abstraction - Abstraksiya

#pragma region struct
	/*Employee employee{ "Nadir", "Zamanov", 45 };
	cout << employee.firstName << endl;
	cout << employee.lastName << endl;
	cout << employee.age << endl;*/
#pragma endregion

#pragma region class
	Human human; // class object(obyekt klassa) ili class instance (obrazes klassa) 
	strcpy_s(human.lastName, 50, "Zamanov");
	human.info();
	cout << '\n';
	Human human2;
	strcpy_s(human2.lastName, 50, "Allahverdiyev");
	human2.info();

	// access modifires - modifikatori dostupa
	// 1. public	- publichniy (eti danniye dostupni vsem (vnutri i vne class/struct))
	// 2. private	- privatniy  (eti danniye dostupni tolko vnutri  class/struct)
	// 3. protected - zashishenniy (eti danniye dostupni vnutri class/struct ili v dochernix class/struct)
#pragma endregion




}