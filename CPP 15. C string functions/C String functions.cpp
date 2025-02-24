#include<iostream>
#include<conio.h>

using namespace std;

int myStrLen(const char* str) {
	int len{};
	while (str[len++] != '\0');
	return len - 1;
}

int main()
{
#pragma region strlen
	/*char word[50] = "Salam";

	cout << strlen(word) << endl;
	cout << myStrLen(word) << endl; */
#pragma endregion

#pragma region concatenation
	//char str1[50];
	//char str2[50];
	//cin >> str1 >> str2;
	///*strcat_s(str1, 50, str2);
	//cout << str1 << endl;
	//cout << str2 << endl;*/
	//strncat_s(str1, 50, str2, 3);
	//cout << str1 << endl;
	//cout << str2 << endl;
#pragma endregion

#pragma region copy
	//char str1[50] = "Turaladdin";
	//char str2[50] = "Ural";
	//strcpy_s(str1, 50, str2);
	//cout << str1 << endl;
	//strncpy_s(str1, 50, str2, 2);
	//cout << str1 << endl;
	//strcpy_s(str1, 50, "Salam");
	//cout << str1 << endl;
#pragma endregion

#pragma region compare
	char str1[50] = "Nadirator";
	char str2[50] = "Nadir";
	/*cout << strcmp(str1, str2) << endl;*/
	/*cout << _strcmpi(str1, str2) << endl;
	cout << _stricmp(str1, str2) << endl;*/
	/*cout << strncmp(str1, str2, 3) << endl;*/

#pragma endregion

#pragma region find
	/*char word[] = "elevator";*/
	/*cout << strchr(word, 'a') << endl;*/
	/*cout << strstr(word, "vat") << endl;*/

#pragma endregion

#pragma region lower, upper
	/*char word[] = "elevator";
	_strupr_s(word);
	cout << word <<endl;
	_strlwr_s(word);
	cout << word <<endl;*/
#pragma endregion

#pragma region reverse
	/*char word[] = "elevator";
		_strrev(word);
		cout << word << endl;*/
#pragma endregion

#pragma region casting to number
/*char number[] = "697.69";
	int numb = atoi(number);
	cout << numb * 10 << endl;
	double num = atof(number);
	cout << num << endl;
	atol(number);
	atoll(number);*/
	/*char st[50];
	_itoa_s(10, st, 50, 10);
	cout << st << endl;*/
#pragma endregion

#pragma region input functions
	// input string line

	/*char word[50];*/
	/*cin.getline(word, 50);*/
	/*gets_s(word, 50);
	cout << word << endl;*/

	// input char symbol
	/*int symb = getchar();
	cout << symb << endl;
	symb = _getch();
	cout << symb << endl;*/
#pragma endregion

#pragma region output functions
	/*char str[40];
	gets_s(str, 40);
	puts(str);*/
	/*char a{ 'a' };
	putchar(a);
	_putch(a);*/
#pragma endregion
}