#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Cat {
public:
	string name;
	int age;
	int life;

	Cat(string name, int age, int life = 9)
		:name{ name }, age{ age }, life{ life }
	{}
	bool operator==(const Cat& cat) {
		return (name == cat.name && age == cat.age && life == cat.life);
	}

	bool operator!=(const Cat& cat) {
		/*return !(*this == cat);*/
		return !(operator==(cat));
	}
	bool operator>(const Cat & cat) {
		return name > cat.name;
	}
	bool operator>=(const Cat& cat) {
		return name >= cat.name;
	}
	bool operator<(const Cat& cat) {
		return name < cat.name;
	}
	bool operator<=(const Cat& cat) {
		return name <= cat.name;
	}

	void show() const {
		cout << "Name:\t" << name << endl;
		cout << "Age:\t" << age << endl;
		cout << "Life:\t" << life << endl;
		cout << "\n\n";
	}
};
template<class T>
void show(vector<T> vec);

bool isPrime(int value);
bool isNegative(int value);
bool isEven(int value);
bool isOdd(int value);
bool ageCompare(const Cat& left, const Cat& right);
bool lifeCompare(const Cat& left, const Cat& right);
void make_negative(int& value);
void pow_2(int& value);

void cat_show(const Cat& cat);

int main() {
	// STL Algorithms

	vector<Cat> cats{
		Cat("Tom", 5, 3),
		Cat("Jerry", 3, 9),
		Cat("Mickey", 2, 0),
		Cat("Minnie", 1, 1),
		Cat("Donald", 4, 2),
		Cat("Daisy", 6, 4),
		Cat("Pluto", 7, 5),
		Cat("Goofy", 8, 6),
		Cat("Chip", 9, 7)
	};

	vector<int> numbers{ 35, -8, 321, 7, 17, 1, 369, 1, 338, 22, -18, -5 };
	auto start = numbers.begin();
	auto end = numbers.end();
	show(numbers);

#pragma region find
	/*int number;
	cout << "Enter any number for search in vector" << endl;
	cin >> number;

	auto result = find(start, end, number);

	if (result != end) {
		cout << *result << " - in this vector" << endl;
	}
	else {
		cout << number << " - is not found" << endl;
	}*/
#pragma endregion

#pragma region find_if
	/*for (size_t i = 1; i < 100; i++)
	{
		if (isPrime(i)) cout << i << ' ';
	}
	cout << endl;*/

	/*auto result = find_if(start, end, isPrime);

	if (result != end) {
		cout << "One or more prime numbers in this vector" << endl;
	}
	else
	{
		cout << "prime numbers are not found in this vector" << endl;
	}*/

#pragma endregion

#pragma region copy
	/*vector<int> new_numbers;
	copy(start+2, end - 1, back_inserter(new_numbers));
	show(new_numbers);*/
#pragma endregion

#pragma region copy_if
	/*vector<int> prime_numbers;
	vector<int> negative_numbers;
	vector<int> even_numbers;
	vector<int> odd_numbers;
	copy_if(start, end, back_inserter(prime_numbers), isPrime);
	copy_if(start, end, back_inserter(negative_numbers), isNegative);
	copy_if(start, end, back_inserter(even_numbers), isEven);
	copy_if(start, end, back_inserter(odd_numbers), isOdd);

	show(prime_numbers);
	show(negative_numbers);
	show(even_numbers);
	show(odd_numbers);*/
#pragma endregion

#pragma region max_element, min_element
	/*cout << *(max_element(start, end)) << endl;
	cout << *(min_element(start, end)) << endl;*/
#pragma endregion
	

#pragma region Algorithms with own class
/*auto max_cat = max_element(cats.begin(), cats.end());
	max_cat->show();

	auto min_cat = min_element(cats.begin(), cats.end());
	min_cat->show();*/

	/*auto max_age_cat = max_element(cats.begin(), cats.end(), ageCompare);
	max_age_cat->show();

	auto min_age_cat = min_element(cats.begin(), cats.end(), ageCompare);
	min_age_cat->show();*/

	/*auto max_age_cat = max_element(cats.begin(), cats.end(), lifeCompare);
	max_age_cat->show();

	auto min_age_cat = min_element(cats.begin(), cats.end(), lifeCompare);
	min_age_cat->show();*/

	/*Cat cat("Mickey", 2, 0);
	find(cats.begin(), cats.end(), cat)->show();*/

	/*sort(cats.begin(), cats.end());

	for (auto cat : cats) {
		cat.show();
	}*/
#pragma endregion

#pragma region for_each()
	// for_each(numbers.begin(), numbers.end(), make_negative);
	/*for_each(numbers.begin(), numbers.end(), pow_2);
	show(numbers);*/

	for (auto cat : cats) {
		cat.show();
	}

	for_each(cats.begin(), cats.end(), cat_show);

#pragma endregion


}
template<class T>
void show(vector<T> vec) {
	for (auto i : vec) {
		cout << i << ' ';
	}
	cout << "\n\n";
}

bool isPrime(int value) {
	if (value == 2) return true;
	if (value <= 1) return false;
	for (size_t i = 2; i <= value / 2; i++)
	{
		if (value % i == 0) return false;
	}
	return true;
}

bool isNegative(int value) { return value < 0; }
bool isEven(int value) { return value % 2 == 0; }
bool isOdd(int value) { return value % 2 != 0; }
bool ageCompare(const Cat& left, const Cat& right) { return left.age < right.age; }
bool lifeCompare(const Cat& left, const Cat& right) { return left.life < right.life; }

void make_negative(int& value) {
	if (!isNegative(value)) value =  -value;
	
}

void pow_2(int& value) {
	value*=value;

}

void cat_show(const Cat& cat) {
	cat.show();
}