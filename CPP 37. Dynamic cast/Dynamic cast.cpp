#include<iostream>
#include<typeinfo>

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
	void fooDog() {
		cout << "Dog foo\n" << endl;
	}
};


class Cat : public Animal {
public:
	float price;
	// method override - pereopredeleniye metoda
	void Sound() override {
		cout << name << " - xochu nyam nyam o moi rabi." << endl;
	}
	void fooCat() {
		cout << "Cat foo\n" << endl;
	}
};

class CheshireCat : public Cat {
public:
	string  smartSence;
	// method override - pereopredeleniye metoda
	void Sound() override {
		cout << name << " - Ponimat' menya neobyazatel'no. Obyazatel'no lyubit' i kormit' vovremya." << endl;
	}
	void fooCheshireCat() {
		cout << "CheshireCat foo\n" << endl;
	}
};

void someFunction(Animal* animal) {
	/*animal->Sound();*/
	// downcasting
	Cat* cat = dynamic_cast<Cat*>(animal);
	Dog* dog = dynamic_cast<Dog*>(animal);
	CheshireCat* cheshire = dynamic_cast<CheshireCat*>(animal);
	if (cat != nullptr && cheshire == nullptr)	cat->fooCat();
	if (dog != nullptr)  dog->fooDog();
	if (cheshire != nullptr)  cheshire->fooCheshireCat();

}

void someFunctionRef(Animal& animal) {
	try
	{
		Cat& cat = dynamic_cast<Cat&>(animal);
		cat.fooCat();

	}
	catch (bad_cast cast)
	{
		cout << "Invalid cast"<<endl;
	}
	
	try
	{
		Dog& dog = dynamic_cast<Dog&>(animal);
		dog.fooDog();
	}
	catch (bad_cast cast)
	{
		cout << "Invalid cast" << endl;
	}

	try
	{
		CheshireCat& cheshire = dynamic_cast<CheshireCat&>(animal);
		cheshire.fooCheshireCat();
	}
	catch (bad_cast cast)
	{
		cout << "Invalid cast" << endl;
	}
	
	
}

// Animal* animal = &dog; // upcast
void someFunctionTypeId(Animal* animal) {
	/*animal->Sound();*/
	const type_info& type = typeid(*animal);
	/*cout << type.name() << endl;*/
	if (type == typeid(Cat)) {
		// downcast
		static_cast<Cat*>(animal)->fooCat();
	}
	if (type == typeid(Dog)) {
		static_cast<Dog*>(animal)->fooDog();
	}
	if (type == typeid(CheshireCat)) {
		static_cast<CheshireCat*>(animal)->fooCheshireCat();
	}

}


int main() {
	// dynamic_cast<new_type>(expression) - dlya polimorfnix typecasting-ov
	Cat cat;
	cat.name = "Sobaka";
	Dog dog;
	dog.name = "Zver";
	CheshireCat cheshire;
	cheshire.name = "Bobik";
	Animal animal;
	animal.name = "Kot";

	/*someFunction(&cat);
	someFunction(&dog);
	someFunction(&cheshire);*/
	/*someFunction(&animal);*/

	/*someFunctionTypeId(&cat);
	someFunctionTypeId(&dog);
	someFunctionTypeId(&cheshire);
	someFunctionTypeId(&animal);*/

	/*someFunctionRef(cat);*/
	/*someFunctionRef(dog);*/
	/*someFunctionRef(cheshire);*/

}

// Smart pointers