#pragma once

#include<iostream>

using namespace std;
class DynamicArray
{
private:
	int* arr;
	int size;
public:
	DynamicArray();
	DynamicArray(int);

	// Copy Constructor
	DynamicArray(const DynamicArray& other);

	// Copy Assign Operator
	DynamicArray& operator=(const DynamicArray& other);

	// Move Constructor
	DynamicArray(DynamicArray&& other);

	// Move Assign Operator
	DynamicArray& operator=(DynamicArray&& other);

	void show();
	void randomize();

	~DynamicArray();
};

