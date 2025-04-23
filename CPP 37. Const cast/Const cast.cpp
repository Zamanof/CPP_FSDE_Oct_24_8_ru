#include<iostream>

using namespace std;

void foo(const int* number1, const int& number2, int* number3) {
	int* fooNumber = const_cast<int*> (number1);
	*fooNumber = 45;

	const_cast<int&>(number2) = 48;
	/*const int* fooNumber3 = const_cast<const int*>(number3);
	*fooNumber3 = 47;*/
}

int main() {
	// const_cast<new_type>(expression)
	// pozvolyayet ubrat ili dobavit konstantnost
	// u iznachalno konstantnix peremennix ubrat ili dobavit konstantnost nevozmojno

	/*const int number{ 6461 };
	int number1 = const_cast<int>(number);*/

	// const_cast rabotayet tolko s ukazatelyami i ssilkami

	int numb1{ 98 }, numb2{ 89 }, numb3{ 69 };
	cout << "Before function calling" << endl;
	cout << "numb1 = " << numb1 << endl;
	cout << "numb2 = " << numb2 << endl;
	cout << "numb3 = " << numb3 << endl;
	
	foo(&numb1, numb2, &numb3);
	
	cout << "\nAfter function calling" << endl;
	cout << "numb1 = " << numb1 << endl;
	cout << "numb2 = " << numb2 << endl;
	cout << "numb3 = " << numb3 << endl;

}