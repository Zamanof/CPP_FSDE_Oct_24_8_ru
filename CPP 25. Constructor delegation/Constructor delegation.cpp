#include<iostream>

using namespace std;
#pragma region Person without delegation
//class Person {
//	char* name;
//	char* address;
//	int age;
//
//public:
//	Person()
//	{
//		name = nullptr;
//		address = nullptr;
//		age = 0;
//		cout << "Person()\n" << endl;
//	}
//
//	Person(const char* name)
//	{
//		this->name = new char[strlen(name) + 1];
//		strcpy_s(this->name, strlen(name) + 1, name);
//		address = nullptr;
//		age = 0;
//		cout << "Person(const char* name)\n" << endl;
//	}
//
//	Person(const char* name, int age)
//	{
//		this->name = new char[strlen(name) + 1];
//		strcpy_s(this->name, strlen(name) + 1, name);
//		address = nullptr;
//		this->age = age;
//		cout << "Person(const char* name, int age)\n" << endl;
//	}
//
//	Person(const char* name, const char* address, int age)
//	{
//		this->name = new char[strlen(name) + 1];
//		strcpy_s(this->name, strlen(name) + 1, name);
//		this->address = new char[strlen(address) + 1];
//		strcpy_s(this->address, strlen(address) + 1, address);
//		this->age = age;
//		cout << "Person(const char* name, const char* address, int age)\n" << endl;
//	}
//
//
//	void show(){
//		if (name) cout << "Name:    " << name << endl;
//		else cout << "Name:    Empty" << endl;
//		if(address) cout << "Address: " << address << endl;
//		else cout << "Address: Empty" << endl;
//		cout << "Age:     " << age << endl;
//		cout << endl;
//	}
//
//	~Person()
//	{
//		delete[]name;
//		delete[]address;
//	}
//};
//#pragma endregion

#pragma region Person with delegation
class Person {
	char* name;
	char* address;
	int age;

public:
	Person()
		: Person(nullptr, nullptr, 0)
	{
		cout << "Person()\n" << endl;
	}

	Person(const char* name)
		: Person(name, nullptr, 0)
	{
		cout << "Person(const char* name)\n" << endl;
	}

	Person(const char* name, int age)
		: Person(name, nullptr, age)
	{
		cout << "Person(const char* name, int age)\n" << endl;
	}

	Person(const char* name, const char* address, int age)
	{
		if (name) {
			this->name = new char[strlen(name) + 1];
			strcpy_s(this->name, strlen(name) + 1, name);
		}
		if (address) {
			this->address = new char[strlen(address) + 1];
			strcpy_s(this->address, strlen(address) + 1, address);
		}

		this->age = age;
		cout << "Person(const char* name, const char* address, int age)\n" << endl;
	}


	void show() {
		if (name) cout << "Name:    " << name << endl;
		else cout << "Name:    Empty" << endl;
		if (address) cout << "Address: " << address << endl;
		else cout << "Address: Empty" << endl;
		cout << "Age:     " << age << endl;
		cout << endl;
	}

	~Person()
	{
		delete[]name;
		delete[]address;
	}
};

#pragma endregion

int main() {
	Person person;
	person.show();

	Person person1("Nadir");
	person1.show();

	Person person2("Nadir", 45 );
	person2.show();

	Person person3("Nadir", "Sumqayit", 45);
	person3.show();
}