#include<iostream>

using namespace std;

int main() {
	// reinterpret_cast<new_type>(expression)
	// pozvalyayet deleat nepravilniye typecasting-i s tochki zreniya proqramirovaniya

	double number{ 56.98 };
	double* ptrNumber = &number;
	int* why = (int*)ptrNumber;
	int* whyWhy = reinterpret_cast<int*>(ptrNumber);
	cout << *why << endl;
	cout << *whyWhy << endl;
}