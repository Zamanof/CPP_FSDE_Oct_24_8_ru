#include<iostream>
#include"ioarray.h"

using namespace std;



int main() {
	srand(time(NULL));
	// direktivi preprocessora
	// #include - podklyucheniye faylov i bibliotek
	const int length{ 20 };
	int arr[length]{};
	fillArray(arr, length);
	showArray(arr, length);
}
