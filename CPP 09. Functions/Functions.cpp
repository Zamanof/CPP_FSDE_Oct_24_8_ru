// Funksiya doljna delat odnu rabotu i delat eqo xorosho 
#include<iostream>

using namespace std;

//Funksiya, kotoraya prinimayet parametr(y),
//i vozvrashchayet znachenie
int sumTwoValues(int left, int right) {
	int result = left + right;
	// some magic calculation code;
	// some magic calculation code;
	// some magic calculation code;
	// some magic calculation code;
	// some magic calculation code;
	return result;
}


//Funksiya kotoraya nichego(nikakikh parametrov) ne prinimayet,
//no vozvrashchayet znachenie
float returnPi() {
	// some magic calculation code;
	// some magic calculation code;
	// some magic calculation code;
	// some magic calculation code;
	// some magic calculation code;
	return 3.14f;
}

//Funksiya, kotoraya prinimayet parametr(y),
//i ne vozvrashchayet nikakikh znacheniy
void showAge(int currentYear, int bornYear) {
	cout <<"You are " << currentYear - bornYear <<" years old!" << endl;
}


//Funksiya kotoraya nichego(nikakikh parametrov) ne prinimayet
//i ne vozvrashchayet nikakikh znacheniy

void sayHello() {
	cout << "Hello" << endl;
	cout << "Salam" << endl;
	cout << "Aloha" << endl;
	return;
	cout << "Ola" << endl;
	cout << "Privet" << endl;
}
 

int main() {
	// functions
	/*
		return_type function_name([arguments list]){
			function body;
			[return return_type_value];
		}
	*/

	/*cout << sumTwoValues(2, 9) << endl;
	int res = sumTwoValues(6, 78);
	cout << res << endl;
	int num1{ 889 }, num2{ 1584 };
	cout << sumTwoValues(num1, num2) << endl;*/

	/*cout << sumTwoValues(sumTwoValues(6, 7), sumTwoValues(16, 71)) << endl;*/

	/*cout << returnPi() << endl;
	cout << returnPi() * sumTwoValues(15, 10) << endl;*/

	/*void -> tip dannix u qootoroqo znacheniye nicheqo*/

	/*showAge(2025, 1980);*/
	sayHello();


	return 0;
}