#include<iostream>

using namespace std;

int main() {
	srand(time(NULL));
	const int length = 20;
	int arr[length]{};
	// -4 - 6
	// 0 - 10
	// rand()% (end - start +1) + start
	int start{ -30 }, end{ 10};
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % (end - start + 1) + start;
	}

	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
	return 0;
}