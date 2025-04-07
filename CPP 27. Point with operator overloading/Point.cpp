#include "Point.h"

Point Point::add(const Point& left, const Point& right) {
	return Point(left.x + right.x, left.y + right.y);
}

double Point::distance(const Point& left, const Point& right)
{
	return sqrt(SQR(right.x - left.x) + SQR(right.y - left.y));
}
double Point::length(const Point& point)
{
	return sqrt(SQR(point.x) + SQR(point.y));
}
void Point::show() {
	cout << "Point(" << x << ", " << y << ")" << endl;
}

#pragma region unary -
// operator unary - 
const Point Point::operator-() {
	return Point(-x, -y);
}
#pragma endregion

#pragma region increments, decrements
// prefix increment
Point& Point::operator++() {
	++x;
	++y;
	return *this;
}

// prefix decrement
Point& Point::operator--() {
	--x;
	--y;
	return *this;
}

// prefix increment
const Point Point::operator++(int) {
	Point point(x, y);
	++x;
	++y;
	return point;
}

// prefix decrement
const Point Point::operator--(int) {
	Point point(x, y);
	--x;
	--y;
	return point;
}
#pragma endregion

#pragma region Arithmetic operators
Point operator+(const Point& left, const Point& right) {
	return Point::add(left, right);
}
double operator-(const Point& left, const Point& right) {
	return Point::distance(left, right);
}
Point operator*(const Point& point, int value) {
	return Point(point.x * value, point.y * value);
}
Point operator*( int value, const Point& point) {
	return Point(point.x * value, point.y * value);
}

#pragma endregion

#pragma region Comparison operators
bool operator==(const Point& left, const Point& right){
	return left.x == right.x && left.y == right.y;
}
bool operator!=(const Point& left, const Point& right){
	return !(left == right);
}
bool operator>(const Point& left, const Point& right) {
	return Point::length(left) > Point::length(right);
}
bool operator<(const Point& left, const Point& right) {
	return Point::length(left) < Point::length(right);
}
#pragma endregion

#pragma region input and output operators
ostream& operator<<(ostream& output, const Point& point) {
	output << "Point(" << point.x << ", " << point.y << ")";
	return output;
}
istream& operator>>(istream& input, Point& point) {
	input >> point.x;
	input.ignore(1);
	input >> point.y;
	return input;
}
#pragma endregion

