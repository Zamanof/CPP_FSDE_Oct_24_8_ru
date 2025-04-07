#include<iostream>
#include"Student.h"
#include"Human.h"

using namespace std;

inline void Foo() {
	cout << "Salam" << endl;
}

int main() {
	Student student{ "Nadir", "Zamanov", 45, {1.f, 5.6f, 12.f, .5f, 9.8f} };
	student.info();

	Student student2{ "Sayli", "Vomirak", 61, {12.f, 8.6f, 11.5f, 10.5f, 9.8f} };
	student2.info();

	Human human{ "Ural", "Almanov", 7 };
	human.info();

	Foo();
	human.info();
	Foo();

}