#include<iostream>

using namespace std;

class A {
public:
	A() { cout << "Constructor A" << endl; }
	~A() { cout << "Destructor A" << endl; }
};
class B: virtual public A {
public:
	B() { cout << "Constructor B" << endl; }
	~B() { cout << "Destructor B" << endl; }
};

class C : virtual public A{
public:
	C() { cout << "Constructor C" << endl; }
	~C() { cout << "Destructor C" << endl; }
};

class D: public B, public C {
public:
	D() { cout << "Constructor D " << endl; }
	~D() { cout << "Destructor D" << endl; }
};



int main() {
	D d;
}