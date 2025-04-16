#include<iostream>
#include<format>

using namespace std;
//// Base class
//class Vehicle {
//	// fields:
//	// Engine
//	// Wheels
//	// ...
//
//	// methods:
//	// viewInfo()
//	// viewFuel()
//	// refuel()
//	// start()
//	// ...
//};
//
//// Derived classes
//class Truck : public Vehicle {
//	// capacity
//	// ...
//};
//
//
//class Bus : public Vehicle {
//	// passengersCapacity
//	// ...
//};

class Person {
private:
	string dream = "some dream";
public:
	string firstName;
	string lastName;
protected:
	int age;
public:
	Person(string firstName, string lastName, int age)
		:firstName{ firstName }, lastName{ lastName }, age{ age }
	{
		cout << "Person parametrized constructor" << endl;
	}

	Person()
		:Person("Empty", "Empty", 0)
	{
		cout << "Person Default constructor" << endl;
	}
	string getInfo() const {
		string result = format("First Name:\t{};\nLast Name:\t{};\nAge:\t\t{};\n",
			firstName, lastName, age);;
		return result;
	}

	string getGreetings(string messageText = "")const
	{
		string result = format("I am {} {}.\n", firstName, lastName);
		if (!messageText.empty())
		{
			result += "I say: ";
			result += messageText;
		}
		else {
			result += "I say nothing.";
		}
		result += format("\nI have a dream {}\n", dream);
		return result;
	}

	~Person() {
		cout << "Person Destructor" << endl;
	}
};

class Student : public Person {
private:
	string faculty;
	float avgScore;
public:
	Student(float avgScore, string faculty = "Programming")
		:avgScore{avgScore}, faculty{faculty}
	{
		cout << "Student parametrized constructor Student(avgScore,faculty)" << endl;
	}
	Student(string firstName, string lastName, int age, 
			float avgScore, string faculty = "Programming")
		:Person(firstName, lastName, age), avgScore{avgScore}, faculty{faculty}
	{
		cout << "Student parametrized constructor Student(firstName, lastName, age,avgScore,faculty)" << endl;
	}

	bool isSuccessful() const {
		return avgScore >= 7 ? true : false;
	}
	~Student(){
		cout << "Student Destructor" << endl;
	}
};


int main() {
	/*
		Inheritance - nasledovaniye
		Rasshireniye funksionalnosti dochernoqo class-a
		za schet roditelskoqo class-a
		(Nasledovaniye public i protected poley i metodov roditelskoqo class-a)


		Parent class (Roditelskiy klass) ->   Child class (Docherniy klass)
		Super class (Super klass)        ->   Sub class (podklass)
		Base class (Bazoviy klass)       ->   Derived class (Proizvodniy klass)
	*/

	/*Person person("Nadir", "Zamanov", 45);*/
	/*cout << person.getInfo();*/
	/*cout << person.getGreetings("Salam vsem!!!");*/
	
	/*Student student(8.5f);
	cout << boolalpha << student.isSuccessful() << endl;
	cout << student.getInfo();
	cout << student.getGreetings();*/
	
	Student student1("Tural", "Salmanov", 17, 11.75f);
	cout << boolalpha << student1.isSuccessful() << endl;
	cout << student1.getInfo();
	cout << student1.getGreetings("Ya ne Ural");


}