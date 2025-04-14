#include<iostream>

using namespace std;

class Enclosing {
private:
	int outerValue{ 5 };
	class Inner {
	private:
		int innerValue1{ 25 };
	public:
		int innerValue2{ 646 };
		void showInnerValues();
		void showOuterValuesInInnerClass(Enclosing&);
	};
public:
	Inner InnerObject;
	void showOuterValues();
};

void Enclosing::showOuterValues() {
	cout << "outerValue = " << outerValue << endl;
}

void Enclosing::Inner::showInnerValues() {
	cout << "innerValue1 = " << innerValue1 << endl;
	cout << "innerValue2 = " << innerValue2 << endl;
	// vlojenniy class ne imeet dostup k private polyam i
	// method-am vneshneqo class-a

	// cout << "outerValue = " << outerValue << endl;
}

void Enclosing::Inner::showOuterValuesInInnerClass(Enclosing& obj) {
	obj.outerValue = 36;
	cout << "outerValue = " << obj.outerValue << endl;
}

int main() {
	/*Enclosing enclosingObject;
	enclosingObject.showOuterValues();
	enclosingObject.InnerObject.showInnerValues();
	enclosingObject.InnerObject.showOuterValuesInInnerClass(enclosingObject);
	enclosingObject.showOuterValues();*/

	// Sozdat takim obrazom obyekt vlojennoqo class-a nevozmojno
	/*Inner innerObject;*/


	// Mojno takim obrazom sozdavat obyekt vlojennoqo class-a
	// no ne rekomenduyetsya, potomu chto propadaet ves smisl 
	// vlojennix class-ov i dlya toqo chtobi izbejat etoqo
	// nujno vlojenniy class sdelat private

	/*Enclosing::Inner innerobject;
	innerobject.showInnerValues();
	innerobject.innerValue2 = 54;*/
}