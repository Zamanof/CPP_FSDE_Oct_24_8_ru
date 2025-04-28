#include<iostream>
// memory - biblioteka s umnimi ukazatelyami i ne tolko
#include<memory>

using namespace std;

template<class T>
class my_shared_pointer {
private:
	T* ptr;
	size_t* count;
public:
	my_shared_pointer()
		:ptr(nullptr), count(nullptr)
	{}
	my_shared_pointer(T* ptr)
		:ptr(ptr), count(new size_t(1))
	{}

	my_shared_pointer(my_shared_pointer<T>& other)
		:ptr(other.ptr), count(other.count)
	{
		(*count)++;
	}

	my_shared_pointer<T>& operator=(my_shared_pointer<T>& other) {
		if (count != nullptr) {
			(*count)--;
			if (*count == 0) {
				delete ptr;
				delete count;
			}
		}
		count = other.count;
		ptr = other.ptr;
		(*count)++;
		return this;
	}

	my_shared_pointer<T>& operator=(T* ptr) {
		if (count != nullptr) {
			(*count)--;
			if (*count == 0) {
				delete ptr;
				delete count;
			}
		}
		count = new size_t(1);
		this->ptr = ptr;
		(*count)++;
		return *this;
	}

	int use_count() {
		return *count;
	}

	T& operator* ()const
	{
		return *ptr;
	}

	T* operator->() const
	{
		return ptr;
	}

	T& get()const
	{
		return *ptr;
	}

	~my_shared_pointer()
	{
		if (count != nullptr) {
			(*count)--;
			if (*count == 0) {
				delete ptr;
				delete count;
			}
		}
	}
};



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
	/*my_shared_pointer<int> ptr1(new int(450));
	my_shared_pointer<int> ptr2(ptr1);
	cout << ptr2.use_count() << endl;*/

	my_shared_pointer<ForShared> ptr3(new ForShared("Object 1"));
	my_shared_pointer<ForShared> ptr4(ptr3);
	cout << ptr3.use_count() << endl;

}