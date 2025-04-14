#include<iostream>

using namespace std;

class Car {
private:
	string model;
	int year;
	class Engine {
	private:
		bool isWorked;
		int horsePower;
		int cylinders;
	public:
		Engine(int horsePower, int cylinders)
			:horsePower{horsePower}, cylinders{cylinders}
		{
			isWorked = false;
		}
		void start() {
			isWorked = true;
			cout << "Bjum, Bjum, Vcux, Vrrrrrr, pirt, pirt, boom" << endl;
		}
	};
	Engine* engine;
public:
	Car(string model, int year, int cylinders, int horsePower)
		:model{model}, year{year}, engine{new Engine(horsePower, cylinders)}
	{
		cout << "Bombastic, fantastic car craeted" << endl;
	}
	void move() {
		engine->start();
		cout << "u vas chto krishi POEXALIIIII" << endl;
	}
	~Car(){
		delete engine;
	}
};

int main() {
	Car ladaPriora("Priora", 2025, 256, 0);
	ladaPriora.move();
}