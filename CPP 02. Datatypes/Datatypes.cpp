#include<iostream>

using namespace std;

int main() {
#pragma region Variables
	// variables
		// datatype name_variable = value;

		// declaration
		// version 1
		//int number;  // identification
		//number = 35; // initialization
		//
		//// version 2
		//int number2 = 36;

		//// version 3
		//int numb, numb2, numb3 = 5;
		//numb = 65;
		//numb2 = 45;

		//

		//cout << number << endl;
		//cout << number2 << endl;
		//int my_number = 36; // copy initialize
		//int variable {};	// unify initialize int variable = {};
		//int age(5);			// direct initialize		
		/*cout << variable << endl;*/
		/*cout << age << endl;*/
#pragma endregion

#pragma region Datatypes
	// Numeric types
	int number = INT32_MAX;			// 4 byte - -2^31 ~ 2^31-1
	/*cout << "int max = " << INT32_MAX << endl;
	cout << "int max = " << INT32_MIN << endl;
	cout << sizeof(number) << endl;*/
	short number2{ 665 };			// 2 byte - -2^15 ~ 2^15-1
	long number3 = { 65L };			// 4 byte - -2^31 ~ 2^31-1
	long long number4 = { 69LL };	// 8 byte - -2^63 ~ 2^63-1

	// charachter type
	char symbol{ 'a' };				// 1 byte - -2^7 ~ 2^7-1 (-128 ~ 127)

	// logical type
	bool check{};					// 1 byte - false, true (0, 1)
	cout << boolalpha << check << endl;

	// real numbers types
	float temperature{ 2536.56F };	// 4 byte	odinarnaya tochnost
	double temperature2{ 23.448 };	// 8 byte	dvoynaya tochnost
#pragma endregion

#pragma region const	
	/*const double PI = 3.14159265359;*/	
#pragma endregion

}
