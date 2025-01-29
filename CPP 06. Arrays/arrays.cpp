#include<iostream>

using namespace std;

int main() {
	// arrays - massiv
	// mnojestvo odnotipnix dannix
	// datatype name[size]

	// obyavleniye massiva v1
	/*int arr[3];*/
	/*cout << sizeof(arr) << endl;*/
	// index -> mestopoljeniye kajdoqo elementa mnojestva
	// indeksi nachinayutsya s 0
	// arr[0] -> nulevoy (perviy) element nasheqo massiva

	/*cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;

	arr[0] = 654;
	arr[1] = 48;
	arr[2] = -56;
	cout << endl;

	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;*/


	// obyavleniye massiva v2
	// 
	// pri obyavlenii razmer massiva mojno ukazivat tolko selochislennimi
	// dannimi krome 0 i otrisatelnix znacheniy
	// u staticheskix (ne vozmojno izmenit nachalniy razmer) massivov
	// razmer ukazivayetsya const znacheniyem
	//const int length = 3;
	//int arr1[length]{364, 789, 45}; //int arr1[length] = {25, 36, 78}

	//for (int i = 0; i < length; i++)
	//{
	//	cout << arr1[i] << ' ';
	//}
	//cout << endl;

	// obyavleniye massiva v3
	/*int arr2[]{ 25, 65, 98, 78, -456, 99, 7 };
	int length = sizeof(arr2) / sizeof(arr2[0]);
	for (int i = 0; i < length; i++)
	{
		cout << arr2[i] << ' ';
	}
	cout << endl;*/

	
	//int arr3[4] {23.5, 98.3f, true, 'f'}; // neyavniy typecasting
	//for (int i = 0; i < 4; i++)
	//{
	//	cout << arr3[i] << ' ';
	//}
	//cout << endl;
}