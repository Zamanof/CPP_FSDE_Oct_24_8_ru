#include<iostream>
#include<map>
#include<vector>

using namespace std;

template<class K, class V>
void show(map<K, V> mp) {
	/*for (auto item : mp) {
		cout << "Key: " << item.first << " Value: " << item.second << endl;
	}*/

	auto it = mp.begin();
	for (; it != mp.end(); it++)
	{
		cout << "Key = " << it->first << "\nValue = " << it->second <<endl << endl;
	}
}


int main() {
	map<string, int> mp;
	vector<int> vec;
	/*cout << "max size " << mp.max_size() << endl;
	cout << "max size " << vec.max_size() << endl;*/
	int value;
	string key;
	/*cout << "enter key: " << endl;
	cin >> key;
	cout << "enter value: " << endl;
	cin >> value;
	pair<string, int> p(key, value);
	mp.insert(p);*/
	mp.insert(pair<string, int>("one", 1));
	mp["adnan"] = 978;

	cout << mp["adnan"] << endl;
	cout << mp["camal"] << endl;
	show(mp);

	vector<int> vec1{ 6, 94, 79, 3 };
	/*map<int, vector<int>> newMap;
	
	newMap[98] = vec;
	for (size_t i = 0; i < newMap[98].size(); i++)
	{
		cout << newMap[98][i] << " ";
	}*/

	map<vector<int>, int> newMap2;
	newMap2[vec1] = 100;

	cout << newMap2[{ 6, 94, 79, 3 }] << endl;

}

