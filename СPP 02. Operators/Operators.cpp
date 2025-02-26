#include<iostream>

using namespace std;

int main() {
#pragma region operators
/*
	unary operators (-, +, ++, --, *, *, &, &, !, ~)
	binary operators(-, +, *, /, %, +=, -=, /=, *=, %=
					 =, >, <, <=, >=, !=, ==,
					 &&, ||, &, |, ^, <<, >>, ->, .)
	ternary operators(?:)
	
	*/
#pragma endregion

#pragma region arithmetic operators
/*int numb1{5};
	int numb2{3};*/
	/*cout << numb1 / numb2 << endl;
	cout << numb1 / 2.0 << endl;*/

	/*cout << numb1 % numb2 << endl;*/
	/*cout << numb2 % numb1 << endl;*/
	/*cout << 'b' % 'a' << endl;*/
	/*cout << 2.36 % 2 << endl; // Error */ 

	// increment ++ (postfix, prefix)
	//int number{ 7 };
	//cout << "Increment" << endl;
	//cout << "number = " << number << endl; // 7

	//cout << "++number = "<< ++number << endl; // 8

	//cout << "number++ = " << number++ << endl; // 8
	//
	//cout << "number = " << number << endl; // 9


	//// decrement -- (postfix, prefix)
	//cout << "Decrement" << endl;
	//
	//cout << "number = " << number << endl; // 9

	//cout << "--number = " << --number << endl; // 8

	//cout << "number-- = " << number-- << endl; // 8
	//
	//cout << "number = " << number << endl; // 7

	/*int numb = 5;
	int old_numb = numb;
	numb += 1;
	cout << "numb = " << numb << endl;
	cout << "old_numb = " << old_numb << endl;*/

	/*int numb = 5;
	int old_numb = numb++;
	cout << "numb = " << numb << endl;
	cout << "old_numb = " << old_numb << endl;*/
#pragma endregion

#pragma region brain explosion
	int number = 5;
	// undefined behaivor
	//cout << ++number <<' ' << ++number << ' ' << ++number << endl; // 6 7 8

	//cout << number++ <<' ' << number++ << ' ' << number++ << endl; // 5 6 7

#pragma endregion


	
}