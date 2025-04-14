#include<iostream>

using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point(int x, int y) :x{ x }, y{ y }
	{
		cout << "Point (" << x << ", " << y << ") was craeted" << endl;
	}
	void update(int x, int y) {
		this->x = x;
		this->y = y;
	}
	~Point()
	{
		cout << "Point (" << x << ", " << y << ") was deleted" << endl;
	}
};

class Image {
private:
	string name;
	int width;
	int height;
	Point position;
public:
	Image(string name, int width, int height, int x, int y)
		:name{name}, width{width}, height{height}, position{Point(x, y)}
	{
		cout << "Image " << name << ".png was craeted" << endl;
	}
	~Image() {
		cout << "Image " << name << ".png was deleted" << endl;
	}

	void moveTo(int x, int y) {
		cout << "Image " << name 
			<< ".png was moved to point(" << x << ", " << y << ")"<< endl;
		position.update(x, y);
	}
};

int main() {
	/* 
		relations- otnosheniye:
			- is - Yavlyayetsya(odin iz raznovidnostey): Inheritance(nasledovaniye)
			- has - Imeet(soderjit): Aggregation(Aqreqasiya), Composition(Kompozisiya)
			- depends on - zavisit ot
			- uses - ispolzuyetsya
			- part-whole - chats-seloe: Nested classes(Vlojenniye class-i)

			Composition:
				1. obyekt chast vxodit v sostav obyekta seloqo
				2. obyekt chast mojet prinadlejat tolko odnomu obyektu selomu
				3. obyekt chast ne mojet sushestvovat bez obyekta seloqo. 
					Seloe uparvlyayet chastyu i nesyot otvestvennost za sushestvovaniye chasti
				4. obyekt chast ne soderjit informasiyu ob obyekte selom

	*/

	Image image1("Chorniy bumer", 10, 80, 0, 0);
	Image image2("Mojna Lizu?", 1080, 1080, 568, 352);
	Image image3("Ivan miliy, pomiluyet ixnuyu dochku", 1, 1, 98, -56);



}