#include<iostream>
// memory - biblioteka s umnimi ukazatelyami i ne tolko
#include<memory>

using namespace std;

class ForShared {
	string name;
	int* array;
public:
	ForShared(string name) : name(name) {
		array = new int[10000];
		cout << "Object - " << name << " constructed" << endl;
	}
	~ForShared()
	{
		delete[] array;
		cout << "Object - " << name << " destructed" << endl;
	}
	void Foo() {
		cout << "Foooo" << endl;
	}
};

int main() {
	// weak pointer
	ForShared* shared = new ForShared("first");
	shared_ptr<ForShared> shPtr1(shared);
	shared_ptr<ForShared> shPtr2(shPtr1);
	cout << shPtr1.use_count() << endl;

	weak_ptr<ForShared> weak(shPtr1);
	cout << weak.use_count() << endl;

	(static_cast<shared_ptr<ForShared>>(weak))->Foo();

}