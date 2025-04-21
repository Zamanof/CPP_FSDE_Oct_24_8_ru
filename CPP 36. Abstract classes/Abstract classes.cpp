#include<iostream>

using namespace std;
// abstract class
// class u kotoroqo est xotya bi odin chisto virtualniy metod nazivayetsya abstraktnim class-om
// nevozmojno sozdat obyekt abstraktonoqo klassa
class Animal {
public:
	string name;
	// chisto virtualniy metod
	// pure virtual method
	virtual void Sound() = 0;
};

class Mammal : public Animal {};
class Bird : public Animal {};

class Dog : public Animal {
public:
	int age;
	// method override - pereopredeleniye metoda
	void Sound() override {
		cout << name << " - haw woof wang" << endl;
	}
};

// Esli nasleduyemsya ot abstract class-a i ne pereopredelyayem metod
// etot class toje stanovitsya abstract class-om
class Cat : public Mammal {
public:
	float price;
};

class CheshireCat : public Cat {
public:
	string  smartSence;
	// method override - pereopredeleniye metoda
	void Sound() override {
		cout << name << " - Ponimat' menya neobyazatel'no. Obyazatel'no lyubit' i kormit' vovremya." << endl;
	}
};

class Sphynx : public Cat {
public:
	string  smartSence;
	// method override - pereopredeleniye metoda
	void Sound() override {
		cout << name << " Ya lisiy kusok koji. No zato nikakix blox" << endl;
	}
};

void infoMammal(Mammal& mammal) {
	mammal.Sound();
}

void infoCat(Cat& cat) {
	cat.Sound();
}

void infoAnimal(Animal& animal) {
	animal.Sound();
}

int main() {
	/*Animal animal;*/
	Sphynx syph;
	syph.name = "Kasha";
	CheshireCat cat;
	cat.name = "Alisa";
	infoAnimal(cat);
}
