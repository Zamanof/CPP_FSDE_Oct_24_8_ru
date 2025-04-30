#include<iostream>
#include<vector>

using namespace std;

int randint(int start = 0, int end = 100) {
	return rand() % (end - start + 1) + start;
}

template<class T>
void show(const vector<T>& vec) {
	// proxod vectora s metodom at()
	/*for (size_t i = 0; i < vec.size(); i++)
	{
		cout << vec.at(i) << ' ';
	}
	cout << '\n';*/

	// proxod vectora s operatorom [] - index
	/*for (size_t i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << ' ';
	}
	cout << '\n';*/

	// proxod vectora s pomoshyu iteratorov
	/*for (auto i = vec.begin(); i < vec.end(); i++)
	{
		cout << *i << ' ';
	}
	cout << '\n';*/

	for (auto item : vec) {
		cout << item << ' ';
	}
	cout << '\n';
}

template<class T>
void showSizeAndCapacity(const vector<T>& vec) {
	cout << "size:\t\t" << vec.size() << endl;
	cout << "capacity:\t" << vec.capacity() << endl;
	cout << '\n';
}

int main() {
	srand(time(NULL));
	vector<int> vec;
	/*showSizeAndCapacity(vec);*/
	for (size_t i = 0; i < 20; i++)
	{
		vec.push_back(randint());
		/*showSizeAndCapacity(vec);*/
	}

	show(vec);
	/*vec.clear();*/
	/*vec.shrink_to_fit();*/
	showSizeAndCapacity(vec);
	/*cout << vec[2] << endl;*/
	/*cout << boolalpha << vec.empty() << endl;*/

	auto begin_itera = vec.begin();
	auto end_itera = vec.end();
	auto r_itera = vec.rbegin();

	/*cout << *begin_itera << endl;
	cout << *(end_itera -1) << endl;
	cout << *r_itera << endl;*/

	/*cout << end_itera - begin_itera << endl;*/

	vec.insert(vec.begin() + 3, 39);
	show(vec);

}
