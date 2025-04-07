#include<iostream>

using namespace std;

class Fraction {
private:
	static int count;
public:
	int numerator;
	int denominator;
	Fraction(int numerator, int denominator)
		:numerator{ numerator }, denominator{ denominator }
	{
		count++;
	}
	static int getCount() {
		return count;
	}
	void show() {
		cout << numerator << '/' << denominator << endl;
	}
	~Fraction()
	{
		count--;
	}
};

int Fraction::count = 0;


int main() {
	Fraction fraction(25, 25);
	/*fraction.show();*/
	cout << fraction.getCount() << endl;
	Fraction fraction1(1, 10);
	/*fraction.show();*/
	cout << fraction1.getCount() << endl;
	cout << Fraction::getCount() << endl;



}