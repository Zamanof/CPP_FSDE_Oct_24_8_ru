#include<iostream>

using namespace std;

int numb{ 25 };

void changeValue(int numb) {
	numb++;
}

void changeGlobalValue() {
	numb++;
}

int main() {
	// Scope zones -> Global, Local
	cout << "Global numb = " << numb << endl;
	changeGlobalValue();
	cout << "Global numb = " << numb << endl;
	int numb{ 15 };
	cout << "Local numb = " << numb << endl;
	cout << "Global numb = " << ::numb << endl;
	cout << "Before function call numb = " << numb << endl; // 15
	changeValue(numb);
	cout << "After function call numb = " << numb << endl;  // 15

	if (true)
	{
		int numb{ 12 };
		cout << numb << endl;
		
	}
	cout << numb << endl;

	{
		int numb{65};
	}

}