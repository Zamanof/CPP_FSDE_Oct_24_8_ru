#include<iostream>

using namespace std;

void Foo(int i) {
	if (i == 500) return;
	Foo(i + 1);
	cout << i << ". Hello" << endl;
}

unsigned long long Factorial(int numb) {
	if (numb == 0 || numb == 1) return 1;
	if (numb < 0) throw exception("NIZZYA");
	unsigned long long factorial{ 1 };
	for (int i = 2; i <= numb; i++)
	{
		factorial *= i;
	}
	return factorial;
}

// n! = n * (n-1)!
unsigned long long FactorialR(int numb) {
	if (numb == 0 || numb == 1) return 1;
	if (numb < 0) throw exception("NIZZYA");

	return numb * FactorialR(numb - 1);
}

int main() {
	// recursion - eto funksiya kotoraya vizivayet samogo sebya
	/*Foo(1);*/

	/*
		ZAPOMNITE POJAYLUSTA VSE!!!
		V rekursivnix funksiyax doljen bit return
		s usloviyem(BASE CASE - BAZOVIY SLUCHAY) dlya toqo chto
		ne proizashlo perepolnenye stack-a (STACK OVERFLOW)
	*/
	/*cout << Factorial(0) << endl;*/
	cout << FactorialR(5) << endl;
}