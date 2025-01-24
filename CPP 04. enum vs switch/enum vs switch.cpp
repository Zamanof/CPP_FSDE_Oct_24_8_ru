#include<iostream>

using namespace std;

int main() {
	enum weekDays {
		MONDAY=1,
		TUESDAY,
		WEDNESDAY,
		THURSDAY,
		FRIDAY,
		SATURDAY,
		SUNDAY
	};
	
	/*cout << MONDAY << endl;
	cout << weekDays::MONDAY << endl;*/

	int weekDay{};
	cout << "Enter day number from 1 to 7" << endl;
	cin >> weekDay;

	switch (weekDay)
	{
	case MONDAY:
		break;
	case TUESDAY:
		break;
	case WEDNESDAY:
		break;
	case THURSDAY:
		break;
	case FRIDAY:
		break;
	case SATURDAY:
		break;
	case SUNDAY:
		break;
	default:
		break;
	}
}