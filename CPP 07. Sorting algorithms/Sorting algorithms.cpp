#include<iostream>

using namespace std;

int main() {
	srand(time(NULL));
	const int length = 10;
	int arr[length]{};

	for (int i = 0; i < length; i++)
	{
		/*arr[i] = rand() % 100;*/
		arr[i] = i + 1;
		/*arr[i] = length - i;*/
	}
	arr[8] = 12;
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';

	int iteration{};
	int tmp{};

#pragma region Bubble sorting O(n^2)
	// bubble sorting v1

	/*for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length - 1; j++)
		{
			iteration++;
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}*/

	// bubble sorting v2

	/*for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length - 1 - i; j++)
		{
			iteration++;
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}*/

	// bubble sorting v3
	/*bool  swapped{};
	int count{};
	do
	{
		swapped = false;
		for (int i = 0; i < length - 1 - count; i++)
		{
			iteration++;
			if (arr[i] > arr[i + 1]) {
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i+ 1] = tmp;
				swapped = true;
			}
		}
		count++;

	} while (swapped);*/
#pragma endregion

#pragma region Insert sort
	/*int i{}, j{};
	for (i = 1; i < length; i++)
	{
		tmp = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > tmp; j--)
		{
			iteration++;
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = tmp;
	}*/
#pragma endregion

#pragma region Selection sort
	int min_index{}, min{};
	for (size_t i = 0; i < length; i++)
	{
		min_index = i;
		min = arr[i];
		for (int j = i + 1; j < length; j++)
		{
			iteration++;
			if (min > arr[j]) {
				min = arr[j];
				min_index = j;
			}
		}
		if (min_index != i)
		{
			arr[min_index] = arr[i];
			arr[i] = min;
		}
	}
#pragma endregion

	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n'; cout << "Algorithm iteration = " << iteration << endl;
}
