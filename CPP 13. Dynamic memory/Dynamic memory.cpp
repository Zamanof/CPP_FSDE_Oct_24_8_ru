#include<iostream>

using namespace std;

int main() {
	int* numb = new int(5);
	cout << *numb << endl;
	/*numb = new int(98);*/

	while (true)
	{
		delete numb;
		numb = new int(98);
	}
}