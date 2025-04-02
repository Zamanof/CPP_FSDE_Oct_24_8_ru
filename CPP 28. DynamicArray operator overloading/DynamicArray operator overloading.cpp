#include"DynamicArray.h"

int main() {
	DynamicArray array(7);
	array.randomize();
	/*array.show();*/
	cout << array;

	DynamicArray array2(5);
	cout << boolalpha << (array == array2) << endl;
	/*cin >> array2;*/
	/*cout << array2.getSize() << endl;*/
	/*cout << array2;*/
	array2 = array;
	cout << boolalpha << (array == array2) << endl;
	/*array2.show();*/
	/*cout << array2;*/
	/*cout << array2.getSize() << endl;*/
	/*cout << array[2] << endl;
	array[2] = 45;
	cout << array[2] << endl;
	cout << array;
	cout << array2;*/

	array[2] = 45;
	cout << boolalpha << (array == array2) << endl;


}