#pragma once
#include<iostream>

using namespace std;
class DynamicArray
{
private:
	int* arr;
	int size;
	friend ostream& operator<<(ostream&, const DynamicArray&);
	friend istream& operator>>(istream&, DynamicArray&);
public:
	DynamicArray();
	explicit DynamicArray(int);
	DynamicArray(const DynamicArray&);

	const DynamicArray& operator=(const DynamicArray&);

	int& operator[](int);
	int& operator[](int) const;

	bool operator==(const DynamicArray&);
	bool operator!=(const DynamicArray&);

	int getSize() const { return size; }
	void show() const;
	void randomize();
	~DynamicArray();	
};

