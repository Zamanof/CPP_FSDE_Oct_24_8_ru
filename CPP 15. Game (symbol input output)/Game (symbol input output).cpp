#include<iostream>
#include<conio.h>

using namespace std;

enum sides {
	EXIT = 13,
	UPLETTER = 'w',
	DOWNLETTER = 's',
	LEFTLETTER = 'a',
	RIGHTLETTER = 'd',
	UPARROW = 72,
	DOWNARROW = 80,
	LEFTARROW = 75,
	RIGHARROW = 77

};

void showGameFields(int fields[][10], int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (fields[i][j] == 0)
			{
				cout << char(176) << char(176);
			}
			if (fields[i][j] == 1)
			{
				cout << char(178) << char(178);
			}
		}
		cout << '\n';
	}
}

void mySwap(int& left, int& right) {
	int tmp = left;
	left = right;
	right = tmp;
}

int main() {
	int gameFiled[10][10]{};
	int row{ 5 }, col{ 5 };
	gameFiled[row][col] = 1;

	int key;
	bool isGame = true;
	while (isGame)
	{
		system("cls");
		showGameFields(gameFiled, 10, 10);
		key = _getch();
		if (key == 224) {
			key = _getch();
		}
		switch (key)
		{
		case EXIT:
			isGame = false;
			break;
		case UPLETTER: case UPARROW:
			if (row != 0) {
				mySwap(gameFiled[row][col], gameFiled[row - 1][col]);
				row--;
			}

			break;

		case DOWNLETTER:  case DOWNARROW:
			if (row != 9) {
				mySwap(gameFiled[row][col], gameFiled[row + 1][col]);
				row++;
			}
			break;
		case LEFTLETTER:  case LEFTARROW:
			if (col != 0) {
				mySwap(gameFiled[row][col], gameFiled[row][col - 1]);
				col--;
			}
			break;
		case RIGHTLETTER: case RIGHARROW:
			if (col != 9) {
				mySwap(gameFiled[row][col], gameFiled[row][col + 1]);
				col++;
			}
			break;
		default:
			break;
		}

	}
}