#include<iostream>

using namespace std;

int main() {
	// pointer to pointers
	int num{ 897 };
	int* ptrNum{ &num };
	cout << "num \t\t= " << num << endl;
	cout << "&num \t\t= " << &num << endl;
	cout << "ptrNum \t\t= " << ptrNum << endl;
	cout << "*ptrNum \t= " << *ptrNum << endl;
	cout << "&ptrNum \t= " << &ptrNum << endl;
	int** ptrToPtrNum = &ptrNum;
	cout << "ptrToPtrNum \t= " << ptrToPtrNum << endl;
	cout << "*ptrToPtrNum \t= " << *ptrToPtrNum << endl;
	cout << "**ptrToPtrNum \t= " << **ptrToPtrNum << endl;
	



}