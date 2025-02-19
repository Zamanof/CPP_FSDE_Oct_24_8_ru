#include<iostream>

using namespace std;

int* allocateMemory(int length) {
	return new int[length];
}

void clearMemory(int* arr) {
	delete[] arr;
}

void copyArrays(int* left, int* right, int length) {
	for (int i = 0; i < length; i++)
	{
		*(left + i) = *(right + i);
	}
}

int* addNewValue(int* arr, int& length, int value)
{
	int* tmp = allocateMemory(length + 1);
	copyArrays(tmp, arr, length);
	clearMemory(arr);
	tmp[length] = value;
	length++;
	return tmp;
}

void FillArray(int* arr, int length);
void ShowArray(int* arr, int length);

int main() {
	srand(time(NULL));
	// Dynamic arrays

	// static arrays
	/*const int length{ 5 };
	int arr[length]{};*/

	// dynamic arrays
	/*int length{};
	cout << "Enter array length:" << endl;
	cin >> length;
	int* dynArr = allocateMemory(length);
	FillArray(dynArr, length);
	ShowArray(dynArr, length);
	dynArr = addNewValue(dynArr, length, 98);
	ShowArray(dynArr, length);*/

}

void FillArray(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		*(arr + i) = rand() % 100;
	}
}
void ShowArray(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		cout << *(arr + i) << ' ';
	}
	cout << '\n';
}