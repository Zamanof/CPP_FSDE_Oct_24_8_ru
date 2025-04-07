#include"DynamicArray.h"

DynamicArray foo(DynamicArray arr) {
	// some operations;
	
	return arr;
}

int main() {
	srand(time(NULL));


	DynamicArray arr; // Default Constructor -> Constructor with Pararameters
	arr.randomize();
	arr.show();

	// DynamicArray arr2 = arr; // Copy Constructor
	//DynamicArray arr2; // Default Constructor -> Constructor with Pararameters
	//arr2 = arr; // Copy assign

	DynamicArray arr3;
	arr3 = foo(arr);


}