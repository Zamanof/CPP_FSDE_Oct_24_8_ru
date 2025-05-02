#include<iostream>
#include<map>

using namespace std;

template<class Container>
void show (Container map)
{
	for (auto item: map)
	{
		cout << "City:\t\t" << item.first
			<< "\nCar index:\t" << item.second << endl << endl;
	}
}
int main() {

	map<string, int> cityIndex;
	multimap<string, int> multiCityIndex;

	cityIndex["Baku"] = 10;
	cityIndex["Sumqayit"] = 50;
	cityIndex["Bilesuvar"] = 12;
	cityIndex["Goranboy"] = 22;
	cityIndex["Ganja"] = 20;
	cityIndex["Gubadli"] = 39;
	cityIndex["Naxichevan"] = 85;
	cityIndex["Tovuz"] = 60;
	cityIndex["Goychay"] = 23;
	cityIndex["Sheki"] = 55;

	/*show(cityIndex);*/
	multiCityIndex.insert(make_pair("Baku", 99));
	multiCityIndex.insert(make_pair("Baku", 77));
	multiCityIndex.insert(make_pair("Sumgayit", 50));
	multiCityIndex.insert(pair<string, int>("Baku", 90));
	multiCityIndex.insert(make_pair("Goychay", 23));
	multiCityIndex.insert(make_pair("Baku", 10));

	/*show(multiCityIndex);*/

	/*for (auto i = multiCityIndex.lower_bound("Baku"); 
			i != multiCityIndex.upper_bound("Baku"); 
			i++)
	{
		cout << "City:\t\t" << i->first
			<< "\nCar index:\t" << i->second << endl << endl;
	}*/

	cout << multiCityIndex.count("Baku") << endl;
}