#include<iostream>

using namespace std;

int main() {
	// Casts:
#pragma region C style cast
	/*float price = (float)2.9;
	char symbol = (char)129;
	cout << price << endl;
	cout << symbol << endl;*/

#pragma endregion

	// static_cast<new_type>(expression) - dlya nepolimorfnix typecasting-ov
	// dynamic_cast<new_type>(expression) - dlya polimorfnix typecasting-ov
	// const_cast<new_type>(expression)
	// reinterpret_cast<new_type>(expression)

	int a{ 45 };
	int b{ 8 };
	float result = static_cast<float>(a) / b;
	cout << result << endl;

	int* ptrA = &a;
	/*double* ptrDbl = (double*)ptrA;*/
	double* ptrDbl = static_cast<double*>(ptrA);
	cout << *ptrDbl << endl;
}