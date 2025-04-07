#include "DynamicArray.h"
#include<iomanip>

DynamicArray::DynamicArray()
	:DynamicArray(10)
{}
DynamicArray::DynamicArray(int size)
	:arr{ new int[size] {} }, size{ size }
{}
DynamicArray::DynamicArray(const DynamicArray& other)
	:arr{ new int[other.size] }, size{ other.size }
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = other.arr[i];
	}
}

// assign operator overloading
const DynamicArray& DynamicArray::operator=(const DynamicArray& other) {
	if (&other != this) {
		if (size != other.size) {
			delete[] arr;
			size = other.size;
			arr = new int[size];
		}

		for (size_t i = 0; i < size; i++)
		{
			arr[i] = other.arr[i];
		}
	}
	return *this;
}

// ostream overloading
ostream& operator<<(ostream& output, const DynamicArray& arr){
	for (size_t i = 0; i < arr.size; i++)
	{
		output << setw(5) << left << arr[i];
	}
	output << endl;
	return output;
}

// istream overloading
istream& operator>>(istream& input, DynamicArray& arr){
	for (size_t i = 0; i < arr.size; i++)
	{
		input >> arr[i];
	}
	return input;
}

// index operator overloading (set)
int& DynamicArray::operator[](int index){
	if (index < 0 || index >= size) {
		throw exception("Index out of range");
	}
	return arr[index];
}

// index operator overloading (get)
int& DynamicArray::operator[](int index) const{
	if (index < 0 || index >= size) {
		throw exception("Index out of range");
	}
	return arr[index];
}

bool DynamicArray::operator==(const DynamicArray& other) {
	if (size != other.size) return false;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] != other.arr[i]) return false;
	}
	return true;
}
bool DynamicArray::operator!=(const DynamicArray& other) {
	return !(*this == other);
}

void DynamicArray::show() const {
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

void DynamicArray::randomize() {
	srand(time(NULL));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 90 + 10;
	}
}

DynamicArray::~DynamicArray() {
	delete[] arr;
}
