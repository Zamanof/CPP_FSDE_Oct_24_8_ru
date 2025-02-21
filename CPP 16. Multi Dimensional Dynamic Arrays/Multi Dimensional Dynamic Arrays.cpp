#include<iostream>
#include<iomanip>

using namespace std;

void fillMdArray(int**, int, int);
void showMdArray(int**, int, int);

int main() {
	srand(time(NULL));
	// Multi Dimensional Dynamic Arrays
	/*int* arr = new int[10];
	delete[]arr;*/
	/*int arr2DStatic[3][3]{};*/
	/*int** arr2DDynamic = new int* [3];
	for (int i = 0; i < 3; i++)
	{
		arr2DDynamic[i] = new int[3];
	}

	fillMdArray(arr2DDynamic, 3, 3);
	showMdArray(arr2DDynamic, 3, 3);


	for (int i = 0; i < 3; i++)
	{
		delete[]arr2DDynamic[i];
	}
	delete[]arr2DDynamic;*/


	int*** arr3D = new int** [3];

	for (int i = 0; i < 3; i++)
	{
		arr3D[i] = new int* [3];
		for (int j = 0; j < 3; j++)
		{
			arr3D[i][j] = new int [3];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			delete[] arr3D[i][j];
		}
		delete[] arr3D[i];
	}
	delete[] arr3D;

}



void fillMdArray(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 1001 - 500;
		}
	}
}
void showMdArray(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << right << setw(5) << arr[i][j];
		}
		cout << '\n';
	}
}

