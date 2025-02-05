#include<iostream>

using namespace std;

void showArray(int arr[10], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}

void fillArray(int arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 101;
	}
	
}



int main() {
	srand(time(NULL));
	const int length{ 10 };
	int arr[length]{};
	fillArray(arr, length);
	showArray(arr, length);


	/*showArray();*/
}