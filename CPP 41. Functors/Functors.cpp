#include<iostream>
#include<algorithm>
#include<list>

using namespace std;

// Functor -  eto class kotriy vedet sebya kak funksiya

class addNumberFrom {
	int delta;
	int current;
public:
	addNumberFrom(int number, int from = 0)
		:delta{ number }, current{ from }
	{
	}

	int operator()() {
		return current += delta;
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

int foo(int start, int end) {
	return rand() % (end - start + 1) + start;
}



int main() {
	srand(time(NULL));
	/*cout << "Multiple table:\n\n";
	for (size_t i = 1; i < 10; i++)
	{
		list<int> lst(10);
		generate_n(lst.begin(), lst.size(), addNumberFrom(i));
		copy(lst.begin(), lst.end(), ostream_iterator<int>(cout, "\t"));
		cout << '\n';
	}*/

#pragma region generate_n
	//list<int> lst(10);
	///*generate_n(lst.begin(), lst.size(), rand);*/
	//generate_n(lst.begin(), lst.size(), randRange(-50, 50));
	//copy(lst.begin(), lst.end(), ostream_iterator<int>(cout, " "));
	//cout << '\n';
#pragma endregion
#pragma region STL Functors
/*
	Arithmetic functors:
		plus			x + y
		minus			x - y
		multiplies		x * y
		divides			x / y
		modulus			x & y
		negate			-x

	Compare functors:
		equal_to		x == y
		not_equal		x != y
		greater			x > y
		less			x < y
		greater_equal	x >= y
		less_equal		x <= y

	Logical functors:
		logical_and		x && y
		logical_or		x || y
		logical_not		!x



*/
#pragma endregion

	

}