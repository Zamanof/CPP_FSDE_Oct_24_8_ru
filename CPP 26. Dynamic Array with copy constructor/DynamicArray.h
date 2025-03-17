#pragma once
#include<iostream>
using namespace std;

class DynamicArray
{
private:
	int* arr;
	int size;
public:
	DynamicArray(int size)
		:arr{ new int[size] }, size{ size }
	{
		cout << "Constructor DynamicArray(int size)" << endl;
	}
	DynamicArray()
		:DynamicArray(5)
	{
		cout << "Constructor DynamicArray()" << endl;
	}

	// deep copy
	// copy constructor
	DynamicArray(const DynamicArray& array)
		:arr{ new int[array.size] }, size{ array.size }
	{
		cout << "Copy Constructor DynamicArray(const DynamicArray& array)" << endl;
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = array.arr[i];
		}
	}

	int getElement(int index) {
		return arr[index];
	}
	void setElement(int index, int value) {
		arr[index] = value;
	}
	void show();
	void randomize();

	~DynamicArray()
	{
		delete[] arr;
		cout << "Destructor: " << endl;
	}


};

