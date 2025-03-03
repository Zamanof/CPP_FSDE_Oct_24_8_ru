#include"ioarray.h"
#include"macros.h"
#include"MyLanguage.h"
#ifndef PI
#define PI 3.14159
#endif // PI

#define E 2.71828

#define A 5
#define B 3

// operator # prevrashayet arqument v stroku 
#define makestr(t) #t

// operator ## obyedenyayet dve leksemi
#define concat(first, second) first##second

#if A == 5
int main() {
	srand(time(NULL));
	// direktivi preprocessora

	/*
		Fuksii preprosessora:
		1. Obrabotka makroopredeleniy
		2. Vklyucheniye faylov
		3. "Rasionalnuyu" predobrobotku
		4. Rashireniye yazika
	*/
#pragma region include, pragma once
	// #include - podklyucheniye faylov i bibliotek
	/*const int length{ 20 };
	int arr[length]{};
	fillArray(arr, length);
	showArray(arr, length);*/
	// pragma once - ne dast ispolzovat etot fayl bolshe odnogo raza
#pragma endregion

#pragma region define
// #define - mojno obyavit konstanti
	/*cout << "PI = "<< PI << endl;
	cout << "E  = "<< E << endl;
#undef PI
#define PI 98
	cout << "PI = "<< PI << endl;*/

	// #define - mojno sozdavat makrosi
		/*cout << SQR(5) << endl;
		cout << SQR(13) << endl;
		cout << CUBE(3) << endl;
		cout << CUBE(15) << endl;*/

		// "svoy yazik proqramirovaniya"

	/*celoe number{};
	print("Vvodite chislo: \n");
	input(number);
	esli(number menshe 5)
	begin
		print("Hello");
	end
	protivnom_sluchae
	begin
		print("Goodbye");
	end*/

	/*beskonechno print "Hello\n";*/

#pragma endregion

#pragma region if, ifdef, ifndef, else, endif, elif
	// uslovnaya kompilyasiya
//#if A + B != 8
//	cout << "Salam" << endl;
//#else
//	cout << "Hi" << endl;
//#endif
	/*cout << "First Main" << endl;*/

#pragma endregion

	/*cout << makestr(Salam aleykum) << endl;*/
	int myNumber{ 60 };
#line 5
//#if A + 5 == 10
//	#error "Salam aleykum"
//#endif
	cout << concat(my, Number) << endl;
}
#elif A == 3
int main() {
	cout << "other main" << endl;
}
#else
int main() {
	cout << "Some main" << endl;
}
#endif

