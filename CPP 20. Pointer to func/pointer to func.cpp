#include"calcFunctions.h"
#include "otherFunctions.h"

int calculator(int left, int right, int(*operation)(int, int))
{
	return operation(left, right);
}

void fillArray(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 100 - 50;
	}
}

void showArray(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

void selectionSortingAsc(int* arr, int length) {
	int min_index{}, min{};
	for (size_t i = 0; i < length; i++)
	{
		min_index = i;
		min = arr[i];
		for (int j = i + 1; j < length; j++)
		{

			if (min > arr[j]) {
				min = arr[j];
				min_index = j;
			}
		}
		if (min_index != i)
		{
			arr[min_index] = arr[i];
			arr[i] = min;
		}
	}
}

void selectionSortingDesc(int* arr, int length) {
	int min_index{}, min{};
	for (size_t i = 0; i < length; i++)
	{
		min_index = i;
		min = arr[i];
		for (int j = i + 1; j < length; j++)
		{

			if (min < arr[j]) {
				min = arr[j];
				min_index = j;
			}
		}
		if (min_index != i)
		{
			arr[min_index] = arr[i];
			arr[i] = min;
		}
	}
}

//void selectionSorting(int* arr, int length, bool asc) {
//	int min_index{}, min{};
//	for (size_t i = 0; i < length; i++)
//	{
//		min_index = i;
//		min = arr[i];
//		for (int j = i + 1; j < length; j++)
//		{
//			if (asc) {
//				if (min > arr[j]) {
//					min = arr[j];
//					min_index = j;
//				}
//			}
//			else
//			{
//				if (min < arr[j]) {
//					min = arr[j];
//					min_index = j;
//				}
//			}
//
//
//		}
//		if (min_index != i)
//		{
//			arr[min_index] = arr[i];
//			arr[i] = min;
//		}
//	}
//}

void selectionSorting(int* arr, int length, bool(*func)(int, int)) {
	int min_index{}, min{};
	for (size_t i = 0; i < length; i++)
	{
		min_index = i;
		min = arr[i];
		for (int j = i + 1; j < length; j++)
		{

			if (func(min, arr[j])) {
				min = arr[j];
				min_index = j;
			}
		}
		if (min_index != i)
		{
			arr[min_index] = arr[i];
			arr[i] = min;
		}
	}
}

bool max(int left, int right) {
	return left > right;
}

bool min(int left, int right) {
	return left < right;
}

void showFilteredArray(int* arr, int length, bool(*pred)(int)) {
	for (int i = 0; i < length; i++)
	{
		if (pred(arr[i])) cout << arr[i] << ' ';
	}
	cout << endl;
}

bool isOdd(int numb) {
	return numb % 2 != 0;
}
bool isEven(int numb) {
	return numb % 2 == 0;
}
bool isNegative(int numb) {
	return numb < 0;
}

int main() {
	srand(time(NULL));
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
		/*int (*calc)(int, int) = nullptr;
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
		}*/
#pragma endregion

#pragma region pointer to func as parameter
		/*cout << calculator(5, 6, multiple) << endl;*/
#pragma endregion
	const int length{ 20 };
	int arr[length]{};
	fillArray(arr, length);
	showArray(arr, length);
	/*selectionSortingAsc(arr, length);
	showArray(arr, length);
	selectionSortingDesc(arr, length);
	showArray(arr, length);*/
	/*selectionSorting(arr, length, false);*/
	/*selectionSorting(arr, length, min);
	showArray(arr, length);
	selectionSorting(arr, length, max);
	showArray(arr, length);*/

	/*showFilteredArray(arr, length, isOdd);
	showFilteredArray(arr, length, isEven);
	showFilteredArray(arr, length, isNegative);*/

	
}