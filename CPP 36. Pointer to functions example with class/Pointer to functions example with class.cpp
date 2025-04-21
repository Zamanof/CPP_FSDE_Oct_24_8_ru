#include<iostream>
#include<format>

using namespace std;

class Human {
public:
	string firstName;
	string lastName;
	int age;
	Human(string firstName, string lastName, int age)
		:firstName{firstName}, lastName{lastName}, age{age}
	{}
	Human() {};
	void showInfo() {
		cout << format("{} {} - {}", firstName, lastName, age) << endl;
	}
	friend bool operator>(const Human& left, const Human& right);
};
bool operator>(const Human& left, const Human& right) {
	return left.age > right.age;
}

template<class T>
void bubbleSorting(T* arr, int length, bool(*predicate)(const T&, const T&));


void showArray(Human* arr, int length);

bool asc(int a, int b) {
	return a > b;
}

bool desc(int a, int b) {
	return a < b;
}

bool predicateAgeAsc(const Human& left, const Human& right) {
	return left.age > right.age;
}

bool predicateAgeDesc(const Human& left, const Human& right) {
	return left.age < right.age;
}

bool predicateFirstNameDesc(const Human& left, const Human& right) {
	return left.firstName > right.firstName;
}

bool predicateLastNameDesc(const Human& left, const Human& right) {
	return left.lastName > right.lastName;
}

int main() {
	/*int arr[6]{ 5, 78,1, -1, 69, 89 };
	bubbleSorting<int>(arr, 6, desc);
	for (size_t i = 0; i < 6; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;*/

	Human humans[7]{
		Human("Nadir", "Zamanov", 44),
		Human("Camal", "Hasanov", 21),
		Human("Ilyas", "Karimov", 18),
		Human("Balaxan", "Quliyev", 98),
		Human("Adnan", "Shahbazli", 11),
		Human("Tural", "Salmanov", 144),
		Human("Elcan", "Aliyev", -45)
	};

	bubbleSorting<Human>(humans, 7, predicateLastNameDesc);
	showArray(humans, 7);

}

template<class T>
void bubbleSorting(T* arr, int length, bool(*predicate)(const T&, const T&)=nullptr) {
	bool swapped = false;
	int pos{};
	do
	{
		swapped = false;

		for (size_t i = 0; i < length - pos - 1; i++)
		{
			if (predicate(arr[i], arr[i + 1])) {
				swap(arr[i], arr[i + 1]);
				swapped = true;
			}
		}
		pos++;

	} while (swapped);
}


void showArray(Human* arr, int length) {
	for (size_t i = 0; i < length; i++)
	{
		arr[i].showInfo();
	}
}