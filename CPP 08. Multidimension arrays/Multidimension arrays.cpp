#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	srand(time(NULL));
#pragma region multidimension Arrays initialize
	/*const int rows{ 3 }, cols{ 3 };*/
		/*int mdArr[rows][cols]{
			{1, 2, 3},
			{4, 5, 6},
			{7, 8, 9}
		};*/

		/*int mdArr[rows][cols]{ 1, 2, 3, 4, 5, 6, 7, 8, 9};*/

		/*cout << mdArr[1][2] << endl;

		cout << mdArr[0][5] << endl;


		cout << mdArr[2][-6] << endl;*/

		/*mdArr[2][-6] = 36;*/

		/*for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				cout << mdArr[i][j] << ' ';
			}
			cout << '\n';
		}*/

		/*int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };*/

		/*int multiArray[][3]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };*/
#pragma endregion

#pragma region multidimension arrays fill random
	//const int rows{ 5 }, cols{ 6 };
	//int arr[rows][cols]{};
	///*cout << sizeof(arr) << endl;*/

	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < cols; j++)
	//	{
	//		arr[i][j] = rand() % 1001;
	//	}
	//}
	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < cols; j++)
	//	{
	//		cout << setw(5) << left << arr[i][j];
	//		/*cout << setw(5) << left << setfill('_') << arr[i][j];*/
	//	}
	//	cout << '\n';
	//}
	//cout << '\n';
	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < cols; j++)
	//	{
	//		cout << hex << setw(5) << left << arr[i][j];
	//		/*cout << setw(5) << left << setfill('_') << arr[i][j];*/
	//	}
	//	cout << '\n';
	//}
#pragma endregion

#pragma region three dimension array
	/*int array3D[3][3][3]{};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				array3D[i][j][k] = rand() % 90 + 10;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				cout << array3D[i][j][k] << ' ';
			}
			cout << endl;
		}
		cout << endl;
	}
	cout << array3D[2][1][1] << endl;*/
#pragma endregion
}