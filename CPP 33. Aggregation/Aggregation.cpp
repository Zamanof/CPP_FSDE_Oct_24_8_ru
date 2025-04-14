#include<iostream>

using namespace std;

class Address {
private:
	string city;
	string street;
	int house;
	int apartament;
public:
	Address(string city,
		string street,
		int house,
		int apartament)
		:city{ city }, street{ street }, house{ house }, apartament{ apartament }
	{
		cout << "Address was created\t" << endl;
	}
	void show() {
		cout << "City:      " << city << endl;
		cout << "Street:    " << street << endl;
		cout << "House:     " << house << endl;
		if (apartament > 0)	cout << "Apartament:" << apartament << endl;
	}
	~Address()
	{
		cout << "Address was deleteded\t" << endl;
	}
};

class Student {
private:
	string firstName;
	string lastName;
	int age;
	Address& address;
public:
	Student(string firstName, string lastName, int age, Address& address)
		:firstName{ firstName }, lastName{ lastName }, age{ age }, address{ address }
	{
		cout << "Student was created\t" << endl;
	}
	~Student()
	{
		cout << "Student was deleted\t" << endl;
	}

	void show() {
		cout << "Hello. I am" << firstName << ' ' << lastName << '.' << endl;
		cout << "I am" << age << " years old." << endl;
		cout << "My address:\n";
		address.show();
	}

};

class Teacher {
private:
	string firstName;
	string lastName;
	int age;
	double salary;
	Address& address;
public:
	Teacher(string firstName, string lastName, int age, double salary, Address& address)
		:firstName{ firstName }, lastName{ lastName }, age{ age }, salary{ salary }, address(address)
	{
		cout << "Teacher was created\t" << endl;
	}
	~Teacher()
	{
		cout << "Teacher was deleted\t" << endl;
	}

	void show() {
		cout << "Hello. I am" << firstName << ' ' << lastName << '.' << endl;
		cout << "I am" << age << " years old." << endl;
		cout << "My address:\n";
		address.show();
	}

};

void foo(Address& address) {
	Student student("Aydan", "Zaman", 17, address);
}

int main() {
	/*
		relations- otnosheniye:
			- is - Yavlyayetsya(odin iz raznovidnostey): Inheritance(nasledovaniye)
			- has - Imeet(soderjit): Aggregation(Aqreqasiya), Composition(Kompozisiya)
			- depends on - zavisit ot
			- uses - ispolzuyetsya
			- part-whole - chats-seloe: Nested classes(Vlojenniye class-i)

			Aggregation:
				1. obyekt chast vxodit v sostav obyekta seloqo
				2. obyekt chast mojet prinadlejat neskolkim obyektam selim
				3. obyekt chast mojet sushestvovat bez obyekta seloqo.
				4. obyekt chast ne soderjit informasiyu ob obyekte selom
	*/

	Address address("Absheron", "Saray MTK", 70, 10);
	Teacher teacher("Nadir", "Zamanov", 45, 5000000.99, address);
	teacher.show();
	foo(address);
	Student student("Ayan", "Zaman", 12, address);
	address.show();
}