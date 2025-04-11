#include"LinkedList.h"

using namespace std;


int main() {
	/*
		Dynamic data structure
			- List (Linked, Double Linked)
			- Stack - LIFO
			- Queue - FIFO
			- Trees
			- Graphs
			- Hash tables
	*/

	LinkedList<int> lst;
	lst.add(42);
	lst.add(60);
	lst.add(125);
	lst.add(10);
	lst.add(15);
	lst.add(12);
	lst.add(13);
	lst.print();

	Node<int>* node = lst.find(125);
	/*LinkedList<int>::printNode(node);
	cout << endl;*/
	/*if (node != nullptr) node->value = 36;
	lst.print();
	auto element = lst.addAfter(113, node);
	lst.print();
	lst.removeAfter(element);
	lst.print();
	lst.remove();
	lst.print();*/
	/*lst.clear();
	lst.print();*/

}