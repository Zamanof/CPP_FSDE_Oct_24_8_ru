#include<iostream>

using namespace std;

int main() {
	// pointers - ukazateli
	// eto tip dannix kotoriye xranyat adresa
#pragma region pointers
/*int numb{ 78 };
	int* ptrNumb = &numb;*/
	// * - pointer (ukazatel), & - address of (vzyatie adresa)
	/*cout << "numb = " << numb << endl;
	cout << "ptrNumb = " << ptrNumb << endl;
	cout << "&numb = " << &numb << endl;
	cout << "*ptrNumb = " << *ptrNumb << endl;*/
	// * - dereference (razimenovaniya)

	//*ptrNumb = 15;

	//cout << "numb = " << numb << endl; // 78, 78, 78, 78, 78, 15

	/*int babuin{ 98 };
	ptrNumb = &babuin;*/
	/*cout << "&babuin = " << &babuin << endl;
	cout << "ptrNumb = " << ptrNumb << endl;*/

	/*double orangutang{ 3.3 };
	double* ptrOran = &orangutang;*/

	/*cout << sizeof(numb) << " byte" << endl;
	cout << sizeof(ptrNumb) << " byte" << endl;*/

	/*cout << sizeof(orangutang) << " byte" << endl;
	cout << sizeof(ptrOran) << " byte" << endl;
	bool* bo{};

	cout << sizeof(bool) << " byte" << endl;
	cout << sizeof(bo) << " byte" << endl;*/
#pragma endregion

#pragma region nullptr
	// nullptr - default value for pointers
		/*int* ptr{};
		int* ptr1 = nullptr;
		int a{ 5 };*/
		/*ptr1 = &a;*/

		/*cout << *ptr1 + 2 << endl;*/

		/*if (ptr1 == nullptr) {
			cout << "nullptr" << endl;
		}
		else {
			cout << *ptr1 + 2 << endl;
		}*/
#pragma endregion

		//const int number = 65;
		//// pointer to const
		//const int* ptrNumber = &number;

		//const int number2 = 98;
		//ptrNumber = &number2;

		// int* ptr - pointer to variable
		// const int* ptr - pointer to const variable
		// int* const ptr - const pointer to variable
		// const int* const ptr - const pointer const to variable

		/*const int n = 65;
		const int m = 69;
		const int* ptrN = &n;
		ptrN = &m;
		const int* const ptrConstN = &n;
		ptrConstN = &m;*/

	/*int a = 5;

	int* const ptrA = &a;

	*ptrA = 78;

	cout << a << endl;*/
}