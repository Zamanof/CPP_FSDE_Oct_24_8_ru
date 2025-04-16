#include<iostream>

using namespace std;

class BaseClass {
private:
	int privateBaseField = 9;
protected:
	int protectedBaseField = 4964;
public:
	int publicBaseField = 795;
};

class DerivedPublic : public BaseClass {
public:
	void showAccessInfo(){
		// dlya dochernoqo klassa
		// public ostayetsya public
		// protected ostayetsya protected
		// private ostayetsya private
			
		cout << ":public BaseClass" << endl;
		cout << "Have access public fields and methods. publicBaseField = "<< publicBaseField << endl;
		cout << "Have access protected fields and methods. protectedBaseField = "<< protectedBaseField << endl;
		cout << "Don't have access private fields and methods."<<endl;
	}
};

class DerivedProtected : protected BaseClass {
public:
	void showAccessInfo() {
		// dlya dochernoqo klassa
		// public stanovitsya protected
		// protected ostayetsya protected
		// private ostyayetsya private

		cout << ":protected BaseClass" << endl;
		cout << "Have access public fields and methods. publicBaseField = " << publicBaseField << endl;
		cout << "Have access protected fields and methods. protectedBaseField = " << protectedBaseField << endl;
		cout << "Don't have access private fields and methods." << endl;
	}
};

class DerivedPrivate : private BaseClass {
public:
	void showAccessInfo() {
		// dlya dochernoqo klassa
		// public stanovitsya private
		// protected stanovitsya private
		// private ostyayetsya private

		cout << ":private BaseClass" << endl;
		cout << "Have access public fields and methods. publicBaseField = " << publicBaseField << endl;
		cout << "Have access protected fields and methods. protectedBaseField = " << protectedBaseField << endl;
		cout << "Don't have access private fields and methods." << endl;
	}
};

class ThirdInheritanceDerivedPublic : public DerivedPublic {
public:
	void method() {
		publicBaseField = 68;			// public ostayetsya public
		protectedBaseField = 78;		// protected ostayetsya protected
		// privateBaseField = 578;		// private ostayetsya private
	}
};

class ThirdInheritanceDerivedProtected : public DerivedProtected {
public:
	void method() {
		publicBaseField = 68;			// public stanovitsya protected
		protectedBaseField = 78;		// protected ostayetsya protected
		// privateBaseField = 578;		// private ostayetsya private
	}
};

class ThirdInheritanceDerivedPrivate : public DerivedPrivate {
public:
	void method() {
		 //publicBaseField = 68;			// public stanovitsya private
		 //protectedBaseField = 78;		    // protected stanovitsya private
		// privateBaseField = 578;		   // private ostayetsya private
	}
};
int main() {
	ThirdInheritanceDerivedPublic obj1;
	obj1.publicBaseField;
	ThirdInheritanceDerivedProtected obj2;
}