#include<iostream>

using namespace std;

int main() {
	srand(time(NULL));
	const int length = 100;
	int arr[length]{};

	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 1000;
		/*arr[i] = i + 1;*/
	}

	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
	// big O notation
	int element{};
	int iteration{};
	int index{ -1 };
	cout << "Enter search element: " << endl;
	cin >> element;
#pragma region Linear search O(n)
	for (int i = 0; i < length; i++)
	{
		iteration++;
		if (element == arr[i]) {
			index = i;
			break;
		}
	}

	if (index != -1) {
		cout << element << " in array. index = " << index << endl;
	}
	else {
		cout << element << " not found!" << endl;
	}
	cout << "Algorithm iteration = " << iteration << endl;

#pragma endregion

#pragma region Binary search O(log n)
	iteration = 0;
	index = -1;
	int start{}, end{length - 1}, mid{};

	while (start <= end)
	{
		iteration++;
		mid = (start + end) / 2;
		if (element == arr[mid]) {
			index = mid;
			break;
		}
		else if (element > arr[mid]) {
			start = mid + 1;
		}
		else if (element < arr[mid])
		{
			end = mid - 1;
		}
	}
	if (index != -1) {
		cout << element << " in array. index = " << index << endl;
	}
	else {
		cout << element << " not found!" << endl;
	}
	cout << "Algorithm iteration = " << iteration << endl;
#pragma endregion



	

	return 0;
}