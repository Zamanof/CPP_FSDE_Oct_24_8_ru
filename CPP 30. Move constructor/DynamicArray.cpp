#include "DynamicArray.h"

DynamicArray::DynamicArray()
	:DynamicArray(5)
{
	cout << "Default constructor" << endl;
}
DynamicArray::DynamicArray(int size)
	:arr{new int[size]}, size{size}
{
	cout << "DynamicArray(int size)" << endl;
}

// Copy Constructor
DynamicArray::DynamicArray(const DynamicArray& other)
	:arr{ new int[other.size]}, size{other.size}
{
	cout << "Copy constructor" << endl;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = other.arr[i];
	}
}

// Copy Assign Operator
DynamicArray& DynamicArray::operator=(const DynamicArray& other){
	if (this != &other) {
		if (size != other.size) {
			delete[] arr;
			arr = new int[other.size];
		}
		size = other.size;
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = other.arr[i];
		}
	}

	cout << "Copy Assign Operator" << endl;
	return *this;
}


// Move Constructor
DynamicArray::DynamicArray(DynamicArray&& other)
	:arr{ other.arr}, size{other.size}
{
	other.arr = nullptr;
	other.size = 0;
	cout << "Move constructor" << endl;
}

// Move Assign Operator
DynamicArray& DynamicArray::operator=(DynamicArray&& other)	
{
	if (this != &other) {
		delete arr;
		arr = other.arr;
		size = other.size;
		other.arr = nullptr;
		other.size = 0;
	}

	cout << "Move Assign Operator" << endl;
	return *this;
}

void DynamicArray::show(){
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}
void DynamicArray::randomize(){
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand()%90 + 10;
	}
}

DynamicArray::~DynamicArray() {
	cout << "~DynamicArray()" << endl;
	delete[] arr;
}
