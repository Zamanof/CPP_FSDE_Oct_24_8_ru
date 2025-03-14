#include<iostream>

using namespace std;

class Person {
public:
	char* name;
	char* surname;
	short bornYear;
	short age;
	Person()
		:name{}, surname{}, bornYear{}, age{}
	{
		cout << "Person()" << endl;
	}
	Person(const char* name, const char* surname, short bornYear) :
		name{ new char[strlen(name) + 1] },
		surname{ new char[strlen(surname) + 1] },
		bornYear{ bornYear },
		age{ 2025 - bornYear }
	{
		strcpy_s(this->name, strlen(name) + 1, name);
		strcpy_s(this->surname, strlen(surname) + 1, surname);
		/*cout << "Person(const char* name, const char* surname, short bornYear)" << endl;*/
	}
	void show() {
		cout << "Name:		" << (name ? name : "Empty") << endl;
		cout << "Surname:	" << (surname ? surname : "Empty") << endl;
		cout << "Age:		" << age << endl;
	}
};

class BankAccount {
public:
	Person person;
	float balance;
	const short percent;

	BankAccount(const char* name, const char* surname, short bornYear, float balance, short percent):
		// initialize list
		person(name, surname, bornYear),
		balance{balance},
		percent{percent}

	{}
	BankAccount(Person person, float balance, short percent) :
		BankAccount(person.name, person.surname, person.bornYear, balance, percent)		
	{}

	void show() {
		person.show();
		cout << "Balance:        " << balance <<endl;
		cout << "Percent:        " << percent <<endl;
	}
};

int main() {
	// int a = 5; // kopiruyushaya inisializasiya		(copy initialize)
	// int b{};   // Unifisisrovannaya inisializasiya  (uniform initialize)
	// int c(5);  // Pryamaya inisializasiya			(direct initialize)

	Person person("Nadir", "Zamanov", 1980);
	/*person.show();*/
	BankAccount personAccount(person, 2500, 17);
	personAccount.show();
}