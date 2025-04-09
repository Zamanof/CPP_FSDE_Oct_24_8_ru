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
		cout << "Class template" << endl;
		cout << "field1 type = " << typeid(field1).name() << endl;
		cout << "field2 type = " << typeid(field2).name() << endl;
	}

	T1 maxValue(T1 otherValue) {
		if (field1 > otherValue) return field1;
		return otherValue;
	}
	
};

template<>
class Test<const char*, float> {
private:
	const char* field1;
	float field2;
public:
	Test(const char* field1) : field1{ field1 } {}
	void showInfo() {
		cout << "Spesialization class template" << endl;
		cout << "field1 type = " << typeid(field1).name() << endl;
		cout << "field2 type = " << typeid(field2).name() << endl;
	}

	const char* maxValue(const char* otherValue) {
		if (strcmp(field1, otherValue) == 1) return field1;
		return otherValue;
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

	/*Test<char, int> test1('e');
	test1.showInfo();
	cout << test1.maxValue('f') << endl;
	cout << test1.maxValue('a') << endl;

	Test<double, float> test2(2.3);
	test2.showInfo();
	cout << test2.maxValue(1.6) << endl;
	cout << test2.maxValue(6.39) << endl;*/
	
	Test<const char*, float>  test3("Adnan");
	test3.showInfo();
	cout << test3.maxValue("Balaxan") << endl;
	cout << test3.maxValue("Abdullah") << endl;
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