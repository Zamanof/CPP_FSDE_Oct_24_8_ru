#include<iostream>

using namespace std;

template <class T1, class T2>
class Test {
private:
	T1 field1;
	T2 field2;
public:
	Test(T1 a) : field1{a}{}
	void showInfo() {
		cout << "field1 type = " << typeid(field1).name << endl;
		cout << "field2 type = " << typeid(field2).name << endl;
	}

};

//int add(int left, int right);
//float add(float left, float right);
//float add(float left, int right);
//int add(int left, float right);

template<class T1, class T2, class T3>
T3 add(T1 left, T2 right);

int main() {

	/*
	static polymorphism:
		- function overloading
		- template functions
		- operator oveloading
		- template class
	 
	
	*/
	/*add<int, float, float>(2, 5.6f);
	add<float, int, double>(2.5f, 5);
	add<int, int, int>(25, 65);*/
}

//int add(int left, int right) {
//	return left + right;
//}
//float add(float left, float right){ 
//	return left + right; 
//}
//float add(float left, int right){ 
//	return left + right; 
//}
//int add(int left, float right) { 
//	return left + right; 
//}

template<class T1, class T2, class T3>
T3 add(T1 left, T2 right) {
	return left + right;
}