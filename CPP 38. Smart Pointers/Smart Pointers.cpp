#include<iostream>
// memory - biblioteka s umnimi ukazatelyami i ne tolko
#include<memory>

using namespace std;

template<class T>
class my_smart_pointer {
private:
	T* ptr;
public:
	explicit my_smart_pointer(T* ptr = nullptr)
		:ptr{ptr}
	{}
	~my_smart_pointer()
	{
		delete ptr;
	}

	T& operator* ()const 
	{
		return *ptr;
	}

	T* operator->() const 
	{
		return ptr;
	}
};

class Test {
public:
	string text;
	Test() :text{ "Salam" } { cout << "Constructed" << endl; }
	~Test() { cout << "Destructed" << endl; }
	void testFoo() { cout << "Foooo" << endl; }
};

void foo() {
	Test* test = new Test();
	/*return;*/
	throw new exception();
	delete test;
}

void foo1() {
	my_smart_pointer<Test> tmp(new Test);
	tmp->testFoo();
	(*tmp).testFoo();
	/*throw new exception();*/
	return ;
}

auto_ptr<Test> foo2() {
	auto_ptr<Test> tmp(new Test);
	return tmp;
}

unique_ptr<Test> foo3() {
	unique_ptr<Test> tmp(new Test);
	return tmp;
}

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

int main(){
	/*
		Smart pointers:
		- auto_ptr
		- unique_ptr
		- shared_ptr
		- weak_ptr	
	*/
	/*foo();*/
	

	/*foo1();*/

	/*auto_ptr<Test> test1(foo2());
	test1->testFoo();*/

	/*unique_ptr<Test> test2(foo3());
	test2->testFoo();*/

	/*Test* t1 = new Test();
	cout << t1->text << endl;
	delete t1;
	Test* t2 = t1;
	for (size_t i = 0; i < 3; i++)
	{
		cout << t2->text << endl;
	}*/

	/*unique_ptr<Test> t3(new Test);
	unique_ptr<Test> t4(t3);*/
	
	shared_ptr<ForShared> shared1(new ForShared("object1"));
	shared_ptr<ForShared> shared2(shared1);
	/*cout << shared1.use_count()<<endl;
	cout << shared2.use_count()<<endl;*/

	{
		shared_ptr<ForShared> shared(shared1);
		cout << shared1.use_count() << endl;
	}
	cout << shared1.use_count() << endl;

	
}