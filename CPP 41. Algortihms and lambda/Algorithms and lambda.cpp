#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
class Cat {
public:
	string name;
	int age;
	int life;

	Cat(string name, int age, int life = 9)
		:name{ name }, age{ age }, life{ life }
	{
	}
	bool operator==(const Cat& cat) {
		return (name == cat.name && age == cat.age && life == cat.life);
	}

	bool operator!=(const Cat& cat) {
		/*return !(*this == cat);*/
		return !(operator==(cat));
	}
	bool operator>(const Cat& cat) {
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

class randRange {
	int start;
	int end;
public:
	randRange(int start, int end)
		:start{ start }, end{ end }
	{
	}
	int operator()() {
		return rand() % (end - start + 1) + start;
	}
};

template <class T>
void show(vector<T> vec);

bool isEven(const int number);

int main() {
	srand(time(NULL));
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

	vector<int> numbers(20);
	/*generate_n(numbers.begin(), numbers.size(), randRange(-50, 50));*/
	int start = -50, end = 50;
	generate_n(numbers.begin(), numbers.size(), [end, start]() {return rand() % (end - start + 1) + start; });
	/*show(numbers);*/

	vector<int>evenNumbers;
	/*copy_if(numbers.begin(), numbers.end(), back_inserter(evenNumbers), isEven);*/

	// lambda expressions -> anonymous functions -> functor
	// [](){}

	/*bool (*func)(int) = [](const int a) {return a % 2 == 0; };
	cout << boolalpha << func(6) << endl;*/

	/*copy_if(
		numbers.begin(),
		numbers.end(),
		back_inserter(evenNumbers),
		[](const int a) {return a % 2 == 0; });*/

		//copy_if(
		//	numbers.begin(),
		//	numbers.end(),
		//	back_inserter(evenNumbers),
		//	[](int& a) {return a *= 10; });

		/*copy_if(
			numbers.begin(),
			numbers.end(),
			back_inserter(evenNumbers),
			[](int a) {return a < 0; });*/
			/*show(evenNumbers);*/

			/*for_each(numbers.begin(), numbers.end(), [](int& a) { a *= 10; });
			show(numbers);*/

			/*for_each(cats.begin(), cats.end(), [](const Cat& cat) {cat.show(); });*/

	string hello = "Hello World!";
	cout << hello << endl;
	/*auto upr_text = (char*)hello.c_str();
	_strupr_s(upr_text, hello.size() + 1);
	hello = string(upr_text);*/

	for_each(hello.begin(), hello.end(), [](char& symb) {symb = toupper(symb); });

	// hello -> string(Container)
	// hello.begin(), hello.end() -> iterators;
	// for_each -> algorithm
	//  [](char& symb) {symb = toupper(symb); } -> functor -> anonymous functions -> lambda expressions

	cout << hello << endl;


}
template <class T>
void show(vector<T> vec) {
	copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
	cout << '\n';
}

bool isEven(const int number) {
	return number % 2 == 0;
}
