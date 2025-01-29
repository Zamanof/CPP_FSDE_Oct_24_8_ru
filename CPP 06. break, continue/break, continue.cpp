#include<iostream>

using namespace std;

int main() {
	// break, continue

#pragma region break
	/*int i{};

	while (true) {
		cout << i << endl;
		if (i == 100)
		{
			break;
		}
		i++;
	}

	cout << "End of loop" << endl;*/

	/*for (int i = 0; i < 100; i++)
	{
		if (i == 5) {
			break;
		}
		cout << i << endl;
	}*/

#pragma endregion

#pragma region continue
	/*int i{};

	while (i < 10) {
		i++;
		if (i == 3)
		{
			continue;
		}
		cout << i << endl;
	}

	cout << "End of loop" << endl;*/


	for (int i = 0; i < 10; i++)
	{
		if (i == 5) {
			continue;
		}
		cout << i << endl;
	}
#pragma endregion


	return 0;
}
