#include<iostream>

using namespace std;

class Animal {
public:
	string name;
	// virtualniy metod
	virtual void Sound() {
		cout << name << " - some sound" << endl;
	}
};

class Dog : public Animal {
public:
	int age;
	// method override - pereopredeleniye metoda
	void Sound() override {
		cout << name << " - haw woof wang" << endl;
	}
};


class Cat : public Animal {
public:
	float price;
	// method override - pereopredeleniye metoda
	void Sound() override {
		cout << name << " - xochu nyam nyam o moi rabi." << endl;
	}
};

class CheshireCat : public Cat {
public:
	string  smartSence;
	// method override - pereopredeleniye metoda
	void Sound() override {
		cout << name << " - Ponimat' menya neobyazatel'no. Obyazatel'no lyubit' i kormit' vovremya." << endl;
	}
};

void infoCat(Cat cat) {
	cout << "This is" << cat.name << endl;
	cat.Sound();
}

void infoDog(Dog dog) {
	cout << "This is" << dog.name << endl;
	dog.Sound();
}

void infoCheshireCat(CheshireCat cheshir) {
	cout << "This is" << cheshir.name << endl;
	cheshir.Sound();
}

void info(Animal& animal)
{
	cout << "This is" << animal.name << endl;
	animal.Sound();
	
}



int main() {
	/*
		static polymorphism:
			function(method) overlaoding
			template functions(methods)
			template classes
			operator overloading
	*/

	Cat cat;
	cat.name = "Gav";

	Dog dog;
	dog.name = "BelkaStrelka";

	/*Animal animal;
	animal.name = "666";

	cat.Sound();
	dog.Sound();
	animal.Sound();*/

	/*Animal cat1 = Cat();
	cat1.name = "Salam";
	cat1.Sound();*/

	// ukazatel na roditelskiy(bazoviy) klass
	/*Animal* cat2 = &cat;
	cat2->Sound();*/

	// ssilka na roditelskiy(bazoviy) klass
	/*Animal& cat3 = cat;
	cat3.Sound();*/

	/*Animal* cat4 = new Cat();
	cat4->name = "Kvadrat";
	cat4->Sound();*/

	/*Animal* cheshirCat = new CheshireCat();
	cheshirCat->name = "Alisa";
	cheshirCat->Sound();*/

	CheshireCat cheshire;
	cheshire.name = "Cheshire Bek";

	/*infoCat(cat);
	infoCat(cheshire);*/

	info(cat);
	info(dog);
	info(cheshire);

	/*Animal** animals = new Animal * [7] {
			&cat,
			& dog,
			& cheshire,
			new Cat(),
			new Dog(),
			new Dog(),
			new CheshireCat()
		};

	for (size_t i = 0; i < 7; i++)
	{
		animals[i]->Sound();
	}*/

}