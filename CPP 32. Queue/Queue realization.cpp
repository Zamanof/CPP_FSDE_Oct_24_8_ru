#include"Queue.h"
#include<queue>

int main() {	
	Queue<float> math(3);
	/*cout << boolalpha << math.full() << endl;
	cout << boolalpha << math.empty() << endl;*/
	cout << "size = " << math.size() << endl;
	math.enqueue(3.1415f);
	math.enqueue(2.4545f);
	math.enqueue(57.3f);
	cout << "size = " << math.size() << endl;
	/*cout <<boolalpha<< math.full() << endl;
	cout <<boolalpha<< math.empty() << endl;*/
	cout << math.dequeue() << endl;
	cout << math.dequeue() << endl;
	cout << math.dequeue() << endl;
	math.enqueue(57.3f);
	cout << math.dequeue() << endl;
	cout << "size = " << math.size() << endl;

}