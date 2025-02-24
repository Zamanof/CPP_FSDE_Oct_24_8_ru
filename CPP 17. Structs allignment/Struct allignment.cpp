#include<iostream>

using namespace std;
struct MyStruct
{
	char e;
	short a;
	int f;
	char g;
	double b;
	int c;
};

int main() {
	// struct allignment
	cout << sizeof(MyStruct) << " byte" << endl;

}