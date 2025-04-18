#include<iostream>

using namespace std;

class A {
public:
	int fieldA;
	A()
	{
		cout << "Constructor A()\n" << endl;
	}
	~A()
	{
		cout << "Destructor A()\n" << endl;
	}

	void methodA() {
		cout << "methodA()\n" << endl;
	}
	void print() {
		cout << "A::print()" << endl;
		cout << "fieldA = " << fieldA << endl << endl;
	}

};
class B {
public:
	int fieldB;
	B()
	{
		cout << "Constructor B()\n" << endl;
	}
	~B()
	{
		cout << "Destructor B()\n" << endl;
	}

	void methodB() {
		cout << "methodB()" << endl;
	}

	void print() {
		cout << "B::print()" << endl;
		cout << "fieldB = " << fieldB << endl << endl;
	}
};

class C :public A, public B {
public:
	int fieldC;
	C()
	{
		cout << "Constructor C()\n" << endl;
	}
	~C()
	{
		cout << "Destructor C()\n" << endl;
	}

	void methodC() {
		cout << "methodC()" << endl;
	}

	void print() {
		A::print();
		B::print();
		cout << "C::print()" << endl;
		cout << "fieldC = " << fieldC << endl << endl;
	}
};


// Diamond problem - problema rombovidnoqo nasledovaniya
// Dead dimond problem - problema almaz smerti
class D: public A, public C {
public:
	D()
	{
		cout << "Constructor D()\n" << endl;
	}
	~D()
	{
		cout << "Destructor D()\n" << endl;
	}
};


int main() {
	/*C cObject;
	cObject.fieldA = 6548;
	cObject.fieldB = 98;
	cObject.fieldC = 78;*/
	/*cObject.methodA();
	cObject.methodB();
	cObject.methodC();*/
	/*cObject.print();*/
	/*cObject.A::print();
	cObject.B::print();*/

	D objectD;
	
	
}