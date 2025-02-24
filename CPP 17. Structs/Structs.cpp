#include<iostream>

using namespace std;

struct Date
{
	unsigned short day;
	unsigned short month;
	unsigned short year;
};

struct User {
	// fields
	// struct member fields
	char name[50];
	char surname[50];
	Date birthDate;
	char login[50];
	char password[50];
};

struct Point
{
	int x;
	int y;
};

int calculateAge(unsigned short, unsigned short);
void showInfo(User);
void showAllUsers(User[], int);

int main() {
	// structs
	/*char name[50]{}, name1[50]{};
	char surname[50]{}, surname1[50]{};
	unsigned short age{}, age1{};*/

#pragma region sturcts
	// instanse
	//User user1{};
	//strcpy_s(user1.name, 50, "Nadir");
	//strcpy_s(user1.surname, 50, "Zamanov");
	//user1.birthDate.day = 7;
	//user1.birthDate.month = 10;
	//user1.birthDate.year = 1980;
	//strcpy_s(user1.login, 50, "MoguDa");
	//strcpy_s(user1.password, 50, "P@ss123456");

	///*showInfo(user1);*/
	//User user2{};
	//strcpy_s(user2.name, 50, "Salam");
	//strcpy_s(user2.surname, 50, "Salamzade");
	//user2.birthDate = { 3, 3, 2003 };
	//strcpy_s(user2.login, 50, "SalamPopalam");
	//strcpy_s(user2.password, 50, "qwerty123456");

	///*showInfo(user2);*/
	//
	//Date date = { 23, 2, 2025 };
	//User user3 = { "Human", "Muxa", date, "Helicopter", "Oqures1234" };
	//User users[3]{ user1, user2, user3 };
	//showAllUsers(users, 3);


#pragma endregion

#pragma region struct pointers
	//User user = {
	//	"Human",
	//	"Muxa",
	//	{23, 2, 2025},
	//	"Helicopter",
	//	"Oqures1234"
	//};
	//User* user_ptr = &user;
	///*cout << sizeof(user_ptr) << " bytes" << endl;*/
	//cout << "user.name = " << user.name << endl;
	//cout << "user_ptr->name = " << user_ptr->name << endl;
	//cout << "(*user_ptr).name = " << (*user_ptr).name << endl;
	//cout << "user_ptr = " << user_ptr << endl;

	//User& user_ref = user;
	//cout<< "user_ref.name = " << user_ref.name << endl;

	/*User* dynUser = new User();
	strcpy_s(dynUser->name, 50, "Nadir");
	cout << dynUser->name << endl;
	User* dynUsers = new User[10];*/
#pragma endregion


}
int calculateAge(unsigned short bornYear, unsigned short currentYear) {
	return currentYear - bornYear;
}

void showInfo(User user) {
	cout << "Name:\t\t" << user.name << endl;
	cout << "Surname:\t" << user.surname << endl;
	cout << "Age:\t\t" << calculateAge(user.birthDate.year, 2025) << endl;
	cout << "Login:\t\t" << user.login << endl;
	cout << '\n';
}

void showAllUsers(User users[], int length) {
	for (int i = 0; i < 3; i++)
	{
		showInfo(users[i]);
	}
}