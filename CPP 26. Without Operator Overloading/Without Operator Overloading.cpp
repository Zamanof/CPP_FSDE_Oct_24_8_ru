#include"Point.h"
int main() {
	Point point1(5, 7);
	Point point2(4, 26);

	cout << Point::distance(point1, point2) << endl;
	cout <<boolalpha<< Point::isEqual(point1, point2) << endl;

	Point point3 = Point::add(point1, point2);
	point3.show();

	Point point4 = Point::mult(point3, 2);
	point4.show();

}