#include<iostream>
#include<algorithm>

using namespace std;

template <class T>
class DynamicArray {
private:
	T* arr;
	int size;
	friend ostream& operator<<<T>(ostream&, const DynamicArray<T>&);
	friend istream& operator>><T>(istream&, DynamicArray<T>&);
public:
	DynamicArray()
		:DynamicArray(5)
	{
	}
	DynamicArray(int size)
		:arr{ new T[size] }, size{ size }
	{
	}

	DynamicArray(const DynamicArray& other)
		:arr{ new T[other.size] }, size{ other.size }
	{
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = other.arr[i];
		}
	}

	DynamicArray& operator=(const DynamicArray& other) {
		if (this != &other) {
			if (size != other.size) {
				delete[] arr;
				arr = new T[other.size];
			}
			size = other.size;
			for (size_t i = 0; i < size; i++)
			{
				arr[i] = other.arr[i];
			}
		}
		return *this;
	}

	// index operator overloading (set)
	T& operator[](int index) {
		if (index < 0 || index >= size) {
			throw exception("Index out of range");
		}
		return arr[index];
	}

	// index operator overloading (get)
	T& operator[](int index) const {
		if (index < 0 || index >= size) {
			throw exception("Index out of range");
		}
		return arr[index];
	}

	bool operator==(const DynamicArray& other) {
		if (size != other.size) return false;
		for (size_t i = 0; i < size; i++)
		{
			if (arr[i] != other.arr[i]) return false;
		}
		return true;
	}
	bool operator!=(const DynamicArray& other) {
		return !(*this == other);
	}

	void randomize() {
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = rand() % 127;
		}
	}

	void sorting() {
		sort(&arr[0], &arr[size]);
	}

	~DynamicArray()
	{
		delete[] arr;
	}

};
template <class T>
ostream& operator<<(ostream& output, const DynamicArray<T>& arr) {
	for (size_t i = 0; i < arr.size; i++)
	{
		output << arr[i] << ' ';
	}
	output << endl;
	return output;
}
template <class T>
istream& operator>>(istream& input, DynamicArray<T>& arr) {
	for (size_t i = 0; i < arr.size; i++)
	{
		input >> arr[i];
	}
	return input;
}


template <>
class DynamicArray<char**> {
private:
	char** arr;
	int size;
	friend ostream& operator<<(ostream&, const DynamicArray&);
	friend istream& operator>>(istream&, DynamicArray&);
public:
	DynamicArray()
		:DynamicArray(5)
	{
	}
	DynamicArray(int size)
		:arr{ new char* [size] }, size{ size }
	{
	}

	DynamicArray(const DynamicArray& other)
		:arr{ new char* [other.size] }, size{ other.size }
	{
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = new char[strlen(other[i]) + 1] {};
			strcpy_s(arr[i], strlen(other[i]) + 1, other[i]);
		}
	}

	DynamicArray& operator=(const DynamicArray& other) {
		if (this != &other) {
			if (size != other.size) {
				delete[] arr;
				arr = new char* [other.size];
			}
			size = other.size;
			for (size_t i = 0; i < size; i++)
			{
				arr[i] = new char[strlen(other[i]) + 1] {};
				strcpy_s(arr[i], strlen(other[i]) + 1, other[i]);
			}
		}
		return *this;
	}

	// index operator overloading (set)
	char*& operator[](int index) {
		if (index < 0 || index >= size) {
			throw exception("Index out of range");
		}
		return arr[index];
	}

	// index operator overloading (get)
	char* operator[](int index) const {
		if (index < 0 || index >= size) {
			throw exception("Index out of range");
		}
		return arr[index];
	}

	bool operator==(const DynamicArray& other) {
		if (size != other.size) return false;
		for (size_t i = 0; i < size; i++)
		{
			if (strcmp(arr[i], other[i]) != 0) return false;
		}
		return true;
	}
	bool operator!=(const DynamicArray& other) {
		return !(*this == other);
	}

	void randomize() {
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = new char[5] {};
			for (size_t j = 0; j < 4; j++)
			{
				arr[i][j] = rand() % 26 + 65;
			}
			arr[i][4] = '\0';

		}
	}

	void sorting() {
		sort(&arr[0], &arr[size], [](char* a, char* b) {return strcmp(a, b) == -1 ? true : false; });
	}


	~DynamicArray()
	{
		for (size_t i = 0; i < size; i++)
		{
			delete[] arr[i];
		}
		delete[] arr;
	}

};

ostream& operator<<(ostream& output, const DynamicArray<char**>& arr) {
	for (size_t i = 0; i < arr.size; i++)
	{
		output << arr[i] << ' ';
	}
	output << endl;
	return output;
}

istream& operator>>(istream& input, DynamicArray<char**>& arr) {
	for (size_t i = 0; i < arr.size; i++)
	{
		input >> arr[i];
	}
	return input;
}

int main() {
	srand(time(NULL));
	DynamicArray<int> arr1;
	arr1.randomize();
	cout << arr1;
	arr1.sorting();
	cout << arr1;

	/*DynamicArray<char> arr2;
	arr2.randomize();
	cout << arr2;*/

	DynamicArray<char**> arr3;
	arr3.randomize();
	arr3[0] = new char[6] {"Tural"};
	cout << arr3;
	arr3.sorting();
	cout << arr3;

}