#pragma once
#include<iostream>
#define SQR(value) (value) * (value)

using namespace std;
class Point
{
private:
	int x;
	int y;

	static Point add(const Point& left, const Point& right);
	static double distance(const Point& left, const Point& right);
	static double length(const Point& point);

public:
	Point(int x, int y) : x{ x }, y{ y }
	{}

	void show();
#pragma region unary -
// operator unary - 
	const Point operator-();
#pragma endregion

#pragma region increments, decrements
// prefix increment
	Point& operator++();

	// prefix decrement
	Point& operator--();

	// prefix increment
	const Point operator++(int);

	// prefix decrement
	const Point operator--(int);
#pragma endregion

#pragma region Arithmetic operators
	friend Point operator+(const Point& left, const Point& right);
	friend double operator-(const Point& left, const Point& right);
	friend Point operator*(const Point& point, int value);
	friend Point operator*( int value, const Point& point);

#pragma endregion

#pragma region Comparison operators
	friend bool operator==(const Point& left, const Point& right);
	friend bool operator!=(const Point& left, const Point& right);
	friend bool operator>(const Point& left, const Point& right);
	friend bool operator<(const Point& left, const Point& right);
#pragma endregion

#pragma region input and output operators
	friend ostream& operator<<(ostream& output, const Point& point);
	friend istream& operator>>(istream& input, Point& point);
#pragma endregion

};

