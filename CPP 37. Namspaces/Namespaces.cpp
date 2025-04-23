#include<iostream>
#include"combat1.h"
#include"combat2.h"

using namespace std;

void fire() {
	cout << "Fireeee" << endl;
}



//void fire() {
//	cout << "Booom Boom" << endl;
//}
int main() {
	fire();
	combat::fire();
	combat::defence();

	foo();
}