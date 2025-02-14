#include<iostream>

using namespace std;

void changeValuePtr(int* number) {
	*number += 10;
}

void changeValueRef(int& number) {
	number += 10;
}

void swapPtr(int* left, int* right) {
	int tmp = *left;
	*left = *right;
	*right = tmp;
}

void swapRef(int& left, int& right) {
	int tmp = left;
	left = right;
	right = tmp;

}

template <class T>
void swapT(T& left, T& right) {
	T tmp = left;
	left = right;
	right = tmp;

}
int main() {
	// Reference - ssilka
	//int numb{ 79 }, numb2{ 64 };
	///*int& refNumb = numb;

	//cout << refNumb << endl;
	//refNumb = numb2;
	//cout << refNumb << endl;
	//cout << numb << " - " << numb2 << endl;
	//numb2 = 78;
	//cout << refNumb << endl;*/

	//changeValueRef(numb);
	//cout << numb << endl;

	// Sposobi otpravki v funksii arqumentov
	// 1. By value (po znacheniyu)
	// 2. By pointer (po ukazatelyu)
	// 3. By reference (po ssilke)
	

	//char num1{ 79 }, num2{ 64 };
	//cout << "num1 = " << num1 << " , num2 = " << num2 << endl;
	//swap(num1, num2);
	//swapT(num1, num2);
	///*swapPtr(&num1, &num2);*/
	///*swapRef(num1, num2);*/
	//cout << "num1 = " << num1 << " , num2 = " << num2 << endl;

	/*const int a = 5;
	const int&  refA = a;*/
}