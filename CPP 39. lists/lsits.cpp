#include<iostream>
#include<list>



using namespace std;

template<class T>
void show(const list<T>& lst) {
	
	cout << "List: " << endl;
	for (auto item : lst) {
		cout << item << ' ';
	}
	cout << '\n';
	cout << "list front: " << lst.front() << endl;
	cout << "list back: " << lst.back() << endl;
	cout << endl;
}

int main() {
	list<int> lst;
	lst.push_back(39);
	lst.push_back(78);
	lst.push_back(71);
	lst.push_back(71);
	lst.push_back(92);
	lst.push_back(92);
	lst.push_back(48);
	
	show(lst);

	list<int>::iterator it = lst.begin();
	++it;
	++it;
	/*cout << "list iterator: " << *it << endl;*/
	lst.insert(it, 100);
	show(lst);
	lst.unique();
	lst.sort();
	show(lst);
	cout<< lst.max_size();
	
}