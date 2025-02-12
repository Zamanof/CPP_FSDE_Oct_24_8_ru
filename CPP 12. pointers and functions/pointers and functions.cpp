#include<iostream>

using namespace std;

void changeValue(int number) {
	cout << "In function " << &number << endl;
	number += 10;
}

void changeValuePtr(int* number) {
	cout << "In function " << number << endl;
	*number += 10;
}

void AddAndDivide(int number1, int number2, int* addResult, float* divideResult) {
	*addResult = number1 + number2;
	*divideResult = number1 / (float)number2;
}

int main() {
	// Primenenyie ukazteley:
	// 1. V funksii mojno otpravit "samu peremennuyu" 
	//		i izmenit eqo v vizivayemoy funksii
	// 2. Iz funksiy mojno "vernut" neskolko znacheniy 
	
	//int number{ 15 };
	//cout << "In main function " << &number << endl;
	//cout << "Before function call: number = " << number << endl; //15
	///*changeValue(number);*/
	//changeValuePtr(&number);
	//cout << "After function call: number = " << number << endl; // 25

	/*int add{};
	float divide{};

	AddAndDivide(5, 2, &add, &divide);
	cout << add << endl;
	cout << divide << endl;*/




}