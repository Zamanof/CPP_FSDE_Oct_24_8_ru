#include<iostream>

using namespace std;

int main() {
	// Ternary ?: - condition ? if_true : if_false;

	int numb{};
	cout << "Enter number: ";
	cin >> numb;

	if (numb >= 0) cout << "Number is positive!" << endl;	
	else cout << "Number is negative!" << endl;
	
}