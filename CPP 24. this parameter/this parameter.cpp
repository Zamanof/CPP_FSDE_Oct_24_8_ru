#include"Student.h"
int main() {
	// this - ukazatel na tekushiy (nineshniy obyekt)
	Student student1("Salam", "Salamzade", 15);
	Student student2("Ural", "Uralidze", 115);
	cout << student1.getFirstName() << endl;
	cout << student2.getFirstName() << endl;
}