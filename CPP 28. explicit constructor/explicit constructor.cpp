#include<iostream>

using namespace std;
class Date {
private:
	int day;
	int month;
	int year;
public:
	Date(int day, int month, int year)
		:day{ day }, month{ month }, year{ year }
	{
		cout << "Date(int day, int month, int year)" << endl;
	}
	explicit Date(int year)
		:Date(1, 1, year)
	{
		cout << "Date(int year)" << endl;
	}
	friend void Show(Date date);
};
void Show(Date date) {
	cout << date.day << '/' << date.month
		<< '/' << date.year << endl;

}

class Array {
private:
	int size;
	int* arr;
public:
	explicit Array(int size = 10) 
		:size{size}, arr{new int[size]}
	{
		cout << "Array(int size = 10)" << endl;
	}
	~Array()
	{
		delete[] arr;
	}
	int getSize()const {
		return size;
	}
	int getValue(const int index) const {
		return arr[index];
	}
	void setValue(const int index, const int value) {
		arr[index] = value;
	}
	void showValue(const int index) const {
		cout << getValue(index) << ' ';
	}
	
};
void showArray(const Array& arr) {
	for (size_t i = 0; i < arr.getSize(); i++)
	{
		arr.showValue(i);
	}
	cout << '\n';
}

int main() {
	srand(time(NULL));
	/*Date date{ 2, 4, 2025 };
	Show(date);
	Date date1{ 2025 };
	Show(date1);*/
	/*Show(5);*/
	/* Date date2 = 2020;
	 Show(date2);*/

	/*int length{ 5 };
	Array array(length);
	for (size_t i = 0; i < length; i++)
	{
		array.setValue(i, rand() % 90 + 10);
	}
	showArray(array);*/
	/*Array array2 = 5;*/
	/*showArray(15);*/

}