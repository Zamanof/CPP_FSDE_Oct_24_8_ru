#include<iostream>

using namespace std;

void fillArray(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 100;
	}
}

void showArray(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}


int main() {
	srand(time(NULL));
	/*const int length{ 10 };
	int arr[length]{};

	fillArray(arr, length);
	showArray(arr, length);*/

	//cout << arr << endl;
	//cout << *arr << endl;

	/*bool arr[9]{};
	for (int i = 0; i < 9; i++)
	{
		cout << "&arr[" << i << "] = " << &arr[i] << endl;
	}*/

	/*bool mArr[3][3]{};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout <<  &mArr[i][j] << endl;
		}
	}*/
}