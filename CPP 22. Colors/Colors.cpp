#include<iostream>
#include<Windows.h>
#include<iomanip>
#include"enums.h"
#include<conio.h>

HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
using namespace std;
void drawAzerbaijaniFlag(short& x, short& y) {
	short tmp = y;
	SetConsoleCursorPosition(hconsole, { x, y });
	SetConsoleTextAttribute(hconsole, (AQUA << 4) + AQUA);
	cout << "               " << endl;
	SetConsoleCursorPosition(hconsole, { x, ++y });
	SetConsoleTextAttribute(hconsole, (RED << 4) + RED);
	cout << "      ";
	SetConsoleTextAttribute(hconsole, (RED << 4) + BRIGHT_WHITE);
	cout << "(*";
	cout << "       " << endl;
	SetConsoleCursorPosition(hconsole, { x, ++y });
	SetConsoleTextAttribute(hconsole, (GREEN << 4) + GREEN);
	cout << "               " << endl;
	SetConsoleTextAttribute(hconsole, (BLACK << 4) + BLACK);
	x++;
	y = tmp;
}
int main() {
#pragma region Color system("color bf")
	/*
	0 = Black       8 = Gray
	1 = Blue        9 = Light Blue
	2 = Green       A = Light Green
	3 = Aqua        B = Light Aqua
	4 = Red         C = Light Red
	5 = Purple      D = Light Purple
	6 = Yellow      E = Light Yellow
	7 = White       F = Bright White
	*/

	/* system("color 70");
	 cout << "Hello" << endl;
	 system("pause");
	 system("cls");
	 system("color 69");
	 cout << "Hello" << endl;*/
#pragma endregion

#pragma region colors Windows.h
	 /*SetConsoleTextAttribute(hconsole, 6);
	 cout << "Hello" << endl;
	 SetConsoleTextAttribute(hconsole, 7);
	 cout << "Hello" << endl;*/

	 /*char text[] = "Hello";
	 for (size_t i = 0; i < strlen(text); i++)
	 {
		 SetConsoleTextAttribute(hconsole, i + 1);
		 cout << text[i];
	 }
	 cout << endl;
	 SetConsoleTextAttribute(hconsole, 7);*/

	 /*for (size_t i = 0; i <= 256; i++)
	 {
		 SetConsoleTextAttribute(hconsole, i);
		 cout << setw(5) << i;
		 if ((i + 1) % 16 == 0 && i != 0) cout << '\n';
	 }*/

	 /*WORD wcolor = (GREEN << 4) + RED;
	 SetConsoleTextAttribute(hconsole, wcolor);
	 cout << "Adnan Ponyal" << endl;
	 SetConsoleTextAttribute(hconsole, (BLACK << 4) + PURPLE);
	 cout << "Tural toje Ponyal" << endl;
	 SetConsoleTextAttribute(hconsole, (BLACK << 4) + WHITE);*/

#pragma endregion

#pragma region Console cursor position
	 /*short x{}, y{};
	 COORD  postion = { x, y };*/
	 /*SetConsoleCursorPosition(hconsole, postion);
	 cout << "Hello" << endl;
	 for (size_t i = 0; i < 150; i++)
	 {
		 system("cls");
		 postion.X = i;
		 SetConsoleCursorPosition(hconsole, postion);
		 cout << "Hello" << endl;
		 Sleep(100);
	 }*/


	 /*for (short i = 0; i < 1080; i++)
	 {
		 drawAzerbaijaniFlag(x, y);
		 Sleep(40);
		 system("cls");
		 if (i % 205 == 0 && i != 0) {
			 y++;
			 x = 0;
		 }
	 }*/
#pragma endregion
	const int menuCount{ 4 };
	const char* menuItems[menuCount] = {
		"Sign In",
		"SignUp",
		"Show All",
		"Exit"
	};
	int key{};
	int choise{ 0 };
	while (true)
	{

		for (size_t i = 0; i < menuCount; i++)
		{
			if (i == 0) SetConsoleCursorPosition(hconsole, { 50, 14 });
			if (i == 1) SetConsoleCursorPosition(hconsole, { 50, 15 });
			if (i == 2) SetConsoleCursorPosition(hconsole, { 50, 16 });
			if (i == 3) SetConsoleCursorPosition(hconsole, { 50, 17 });
			if (i == choise) {
				SetConsoleTextAttribute(hconsole, (BLACK << 4) + RED);
				cout << ">  " << menuItems[i] << endl;
			}
			else {
				SetConsoleTextAttribute(hconsole, (BLACK << 4) + WHITE);
				cout << "  " << menuItems[i] << endl;
			}
		}

		key = _getch();
		if (key == 224) {
			key = _getch();
		}
		switch (key)
		{
		case UPARROW:
			choise--;
			break;
		case DOWNARROW:
			choise = ++choise % menuCount;
			break;
		}
		if (choise < 0) choise = menuCount - 1;
		system("cls");
	}



}