#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

enum
{
	CHOICE = 3,
	INPUT_FILENAME,
	INPUT_DIMENSION,
	INPUT_ELEMENTS,
	FILE_ERROR
};

int main() {
	char answer;
	const int MENU_COUNT = 8;
	int i{}, j{};
	char Menu[MENU_COUNT][50] = {
		"1. Read data from file\n",
		"2. Write data in file\n",
		"3. Exit\n",
		"Your Choice\n",
		"Enter file name\n",
		"Enter array size\n",
		"Enter array element\n",
		"File can not open\n",
	};

	do
	{
		for (size_t i = 0; i < 4; i++)
		{
			cout << Menu[i];
		}
		cin >> answer;
		system("cls");
	} while (answer < '1' || answer > 3);
	
	if (answer == 3) return 0;
}
