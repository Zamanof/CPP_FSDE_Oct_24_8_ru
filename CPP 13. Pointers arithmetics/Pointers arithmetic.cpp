// Ukazateli v C++ — kak ogon: 
// greyut, kogda ispolzuesh pravilno, 
// i sjigayut, yesli teryayesh kontrol.
//						Chatomir Gptiyev

#include<iostream>

using namespace std;

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

int main() {
	srand(time(NULL));
	// Pointers arithmetic
	int numb1{2}, numb2{56};
	int* ptrNumb1{ &numb1 }, * ptrNumb2{ &numb2 };

	/*cout << *(ptrNumb2 - 8) << endl;*/
	/**(ptrNumb2 - 8) = 8463;
	cout << numb1 << endl;*/

	// cout << ptrNumb1 + ptrNumb2 << endl;
	// cout << ptrNumb1 * ptrNumb2 << endl;
	// cout << ptrNumb1 / ptrNumb2 << endl;
	 
	/*cout << ptrNumb1 - ptrNumb2 << endl;*/

	/*cout << ptrNumb1 << endl;
	cout << ptrNumb1 + 1 << endl;
	cout << ptrNumb1 - 1 << endl;
	cout << ptrNumb1++ << endl;
	cout << ptrNumb1-- << endl;
	*/

	//int arr[5]{89, 78, 98, 7, 0};
	//FillArray(arr, 5);
	//ShowArray(arr, 5);
	///*cout << *(arr + 2) << endl;*/

	//for (int i = 0; i < 5; i++)
	//{
	//	cout << arr + i << endl;
	//}
	/*int mdArr[2][2]{ 52, 45, 65, 97 };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << &mdArr[i][j] << endl;

		}
	}*/

	/*int arr[5]{89, 78, 98, 7, 8};
	for (auto i = arr; i <= &arr[4]; i++)
	{
		cout << *i << ' ';
	}
	cout << '\n';*/
}