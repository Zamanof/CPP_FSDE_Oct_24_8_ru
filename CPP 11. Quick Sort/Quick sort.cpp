#include<iostream>
#include<chrono>



using namespace std::chrono;
using namespace std;

void FillArray(int arr[], int length);
void ShowArray(int arr[], int length);
void QuickSort(int arr[], int length);
void BubbleSort(int arr[], int length);
void InsertionSort(int arr[], int length);
void SelectionSort(int arr[], int length);

int main() {
	const unsigned int length{ 250000 };
	int arr[length]{};
	FillArray(arr, length);
	/*ShowArray(arr, length);*/
	auto start = high_resolution_clock::now();
	

	/*BubbleSort(arr, length);*/
	/*InsertionSort(arr, length);*/
	/*SelectionSort(arr, length);*/
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<milliseconds>(stop - start);
	cout << duration.count() << " milliseconds" << endl;
	cout << duration.count() / 1000.f << " seconds" << endl;
	cout << '\n';
	system("color 02");
	ShowArray(arr, length);

}

void FillArray(int arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = i;
	}
}
void ShowArray(int arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}
void QuickSort(int arr[], int length) {
	int i{ 0 }, j = length;
	int tmp{}, pos{};
	pos = arr[length / 2];

	do
	{
		while (arr[i] < pos) i++;
		while (arr[j] > pos) j--;
		if (i <= j) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}

	} while (i <= j);

	if (j > 0) QuickSort(arr, j);
	if (length > i) QuickSort(arr + i, length - i);
}

void BubbleSort(int arr[], int length) {
	bool  swapped{};
	int count{}, tmp{};
	do
	{
		swapped = false;
		for (int i = 0; i < length - 1 - count; i++)
		{

			if (arr[i] > arr[i + 1]) {
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				swapped = true;
			}
		}
		count++;

	} while (swapped);
}
void InsertionSort(int arr[], int length) {
	int i{}, j{}, tmp{};
	for (i = 1; i < length; i++)
	{
		tmp = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > tmp; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = tmp;
	}
}
void SelectionSort(int arr[], int length) {
	int min_index{}, min{};
	for (size_t i = 0; i < length; i++)
	{
		min_index = i;
		min = arr[i];
		for (int j = i + 1; j < length; j++)
		{
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
}