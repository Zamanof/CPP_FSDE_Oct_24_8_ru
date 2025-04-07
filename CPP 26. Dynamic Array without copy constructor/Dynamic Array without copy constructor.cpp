#include"DynamicArray.h"

// shallow copy
void Foo(DynamicArray arr) {
	/*cout << arr.arr << endl;
	cout << &arr.size << endl;*/
}

int main() {
	srand(time(NULL));

	DynamicArray arr1(15);
	arr1.randomize();
	arr1.show();
	/*cout << arr1.arr << endl;
	cout << &arr1.size << endl;*/
	/*Foo(arr1);*/
	DynamicArray arr2(arr1);


	


}