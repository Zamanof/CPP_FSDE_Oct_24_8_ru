#include<iostream>

using namespace std;
// age - int, temperature - double, check - bool

union Value {
	int age;
	float temperature;
	bool check;
} value;

int main() {
	value.check = true;
	cout << boolalpha << "Check: " << value.check << endl;
	value.age = 45;
	cout << "Age: " << value.age << endl;
	value.temperature = 36.6;
	cout << "Temperature: " << value.temperature << endl;
	cout << "union: " << sizeof(value) << "  byte" << endl;

	/*cout << value.temperature 
		<< " " << value.age 
		<< " " << value.check << endl;*/
}