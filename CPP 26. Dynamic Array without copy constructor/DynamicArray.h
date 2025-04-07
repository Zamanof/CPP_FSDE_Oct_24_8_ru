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
		:arr{new int[size]}, size{size}
	{}
	DynamicArray()
		:DynamicArray(5)
	{}

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
		/*cout << "Destructor: "<< size << endl;*/
	}


};

