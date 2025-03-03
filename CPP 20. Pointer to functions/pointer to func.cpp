#include<iostream>
#include<stdio.h>
#include"calcFunctions.h"
#include"otherFunctions.h"

using namespace std;

int main() {

#pragma region pointer to functions
	// pointer to functions
		/*cout << add << endl;*/
		/*int(*funcPtr)(int, int) = add;*/
		/*cout << add(25, 98) << endl;
		cout << funcPtr(25, 98) << endl;*/

		/*cout << sizeof(funcPtr) << endl;*/

		/*void(*ptrFoo)(void) = foo;
		ptrFoo();

		int* (*ptrBar)(int*, int*) = bar;*/
#pragma endregion
#pragma region calculator with pointer to func
	int (*calc)(int, int) = nullptr;
	int left{}, right{};
	short menuItem{};
	cout << "Enter first value" << endl;
	cin >> left;
	cout << "Enter second value" << endl;
	cin >> right;

	enum operations { ADD = 1, SUBTRACT, MULTIPLY, DIVIDE };
	cout << "Choise operation:\n";
	cout << "1. Add:\n";
	cout << "2. Subtract:\n";
	cout << "3. Multiply:\n";
	cout << "4. Divide:\n";
	cin >> menuItem;
	switch (menuItem)
	{
	case ADD:
		calc = add;
		break;
	case SUBTRACT:
		calc = subtract;
		break;
	case MULTIPLY:
		calc = multiple;
		break;
	case DIVIDE:
		calc = divide;
		break;
	default:
		cout << "Incorrect menu item" << endl;
		break;
	}
	if (calc != nullptr) {
		cout << calc(left, right) << endl;
	}
#pragma endregion

}