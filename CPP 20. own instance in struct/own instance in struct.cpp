#include<iostream>

using namespace std;

struct MyStruct {
	int first;
	double second;
	MyStruct* mySruct;
};

int main() {
	/*cout << sizeof(MyStruct) << endl;*/
	MyStruct my1 = { 5, 5.6, nullptr};
	MyStruct my2 = { 45, 87, &my1 };

	cout << my2.first << endl;
	cout << my2.second << endl;
	cout << my2.mySruct->first << endl;
	cout << my2.mySruct->second << endl;

}