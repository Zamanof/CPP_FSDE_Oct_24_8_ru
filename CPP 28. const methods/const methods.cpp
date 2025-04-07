#include<iostream>

using namespace std;

class Date {
private:
	int day;
	int month{10};
	int year{2025};
public:
	// void setDay(this, int value)
	void setDay(int value) {
		day = value;
	}

	// void getDay(const this)
	int getDay() const {
		return day;
	}
	void show() const {
		cout << day << '/' << month << '/' << year << endl;
	}
};

int main() {
	// const methods
	Date date;
	int day{ 5 };
	date.setDay(day);
	cout << date.getDay() << endl;
	date.show();

}