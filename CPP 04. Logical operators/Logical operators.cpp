#include<iostream>

using namespace std;

int main() {
	// && - logical and
	/*cout << boolalpha << "true  && true  = " <<  (true && true) << endl;// true
	cout << boolalpha << "true  && false = " << (true && false) << endl;  // false
	cout << boolalpha << "false && true  = " <<  (false && true) << endl; // false
	cout << boolalpha << "false && false = " << (false && false) << endl; // false  */
	
	// || - logical or
	//cout << boolalpha << "true  || true  = " << (true  || true) << endl;  // true
	//cout << boolalpha << "true  || false = " << (true  || false) << endl; // true
	//cout << boolalpha << "false || true  = " << (false || true) << endl;  // true
	//cout << boolalpha << "false || false = " << (false || false) << endl; // false

	// ! - logical not
	
	//cout << boolalpha << "!true  = " <<  !true << endl;  // false
	//cout << boolalpha << "!false  = " << !false << endl;  // true

	int numb{};
	cout << "Enter number: ";
	cin >> numb;

	/*(numb >= 0) && cout << "number is positive" << endl;
	(numb < 0) && cout << "number is negative" << endl;*/

	/*(numb < 0) || cout << "number is positive" << endl;
	(numb >= 0)  || cout << "number is negative" << endl;*/
}