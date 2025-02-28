#include<iostream>

using namespace std;

struct Date {
	unsigned short Year : 12;
	unsigned short Month : 4;
	unsigned short Day : 5;
	unsigned short Hour : 5;
	unsigned short Minute : 6;
	unsigned short Second : 6;

} ;

struct Languages {
	unsigned short Azerbaijani : 1;
	unsigned short English : 1;
	unsigned short Russian : 1;
	unsigned short Corean : 1;
	unsigned short Italian : 1;
	unsigned short Spanish : 1;
	unsigned short Dutch : 1;
	unsigned short HighValirian : 1;
	unsigned short Latin : 1;
	unsigned short Klingon : 1;

};

struct CurriculumVitae
{
	char firstName[25];
	char lastName[25];
	Date BirthDay;
	Languages language;
};

void ShowCv(CurriculumVitae CV) {
	cout << "FirstName: " << CV.firstName << endl;
	cout << "LastName: " << CV.lastName << endl;
	cout << "BirthDay: " << CV.BirthDay.Day << '.'
		<< CV.BirthDay.Month << '.'
		<< CV.BirthDay.Year << '\n';
	cout << "\tAzerbaijani: ";
	if (CV.language.Azerbaijani == 1) {
		cout << "V\n";
	}
	else {
		cout << "X\n";
	}
	cout << "\tEnglish: ";
	if (CV.language.English == 1) {
		cout << "V\n";
	}
	else {
		cout << "X\n";
	}
}

int main() {
	// bit fields
	CurriculumVitae myCV{
		"Nadir",
		"Zamanov",
		{ 1980, 10,7},
		{1, 0, 1, 0}
	};
	ShowCv(myCV);

	cout << "CurriculumVitae:   " << sizeof(CurriculumVitae) << " byte" << endl;
	cout << "Date:              " << sizeof(Date) << " byte" << endl;
	cout << "Languages:         " << sizeof(Languages) << " byte" << endl;

}