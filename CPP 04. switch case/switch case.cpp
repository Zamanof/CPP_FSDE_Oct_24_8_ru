#include<iostream>

using namespace std;

int main() {
	// switch case - mnojestvenniy vibor

	int weekDay{};
	cout << "Enter day number from 1 to 7" << endl;
	cin >> weekDay;
	// switch rabotayet tolko s selochislennimi dannimi
	// case-i doljni bit unikalnimi
	// case-i doljni bit const-mi
	
	switch (weekDay)
	{
	case 1:
		cout << "Monday" << endl;
		break;
	case 2:
		cout << "Tuesday" << endl;
		break;
	case 3:
		cout << "Wednesday" << endl;
		break;
	case 4:
		cout << "Thursday" << endl;
		break;
	case 5:
		cout << "Friday" << endl;
		break;
	case 6:
		cout << "Saturday" << endl;
		break;
	case 7:
		cout << "Sunday" << endl;
		break;
	default:
		cout << "Incorrect data" << endl;
		break;
	}

	/*cout << "Skolko svetov na flaqe Azerbayjana?" << endl;
	cout << "a) 1" << endl;
	cout << "b) 2" << endl;
	cout << "c) 3" << endl;
	cout << "d) 4" << endl;
	char check{};
	cout << "Sdelayte svoy vibor" << endl;
	cin >> check;
	switch (check)
	{
	case 'a': case 'A': case 'b': case 'B': case 'c': case 'C':
		cout << "Nepravilno" << endl;
		break;
	case 'd':
	case 'D':
		cout << "Pravilno" << endl;
		break;
	default:
		cout << "Nepravilniy vibor" << endl;
		break;
	}*/
}