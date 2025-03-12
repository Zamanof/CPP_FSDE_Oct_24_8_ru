#include "Some.h"
#include<iostream>
using namespace std;
void Some::Show() {
	if (_array != nullptr) {
		for (size_t i = 0; i < _length; i++)
		{
			cout << _array[i] << ' ';
		}
		cout << '\n';
	}
}
