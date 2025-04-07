#pragma once
#include<iostream>
#define SQR(x) (x)*(x)

using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int x, int y) :x{ x }, y{ y }{}
	void show();
	static bool isEqual(const Point& left, const Point& right);
	static Point add(const Point& left, const Point& right);
	static Point mult(const Point& left, int value);
	static double distance(const Point& left, const Point& right);

};

