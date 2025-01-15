#include<iostream>

using namespace std;

int main() {
	/*
	 escape sequences:
		\n - new line
		\t - tabulation
		\b - backspace
		\r - return carriage
		\' - single quote
		\" - double quote
		\\ - backslash
		\a - windows alarm
	*/
	cout << "Goo\\db\"ye P\aython!!!" << endl;
	cout << "Hello\a C++!!!" << endl;
	return 0;
}