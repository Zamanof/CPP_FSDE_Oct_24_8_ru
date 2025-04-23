#include<iostream>

using namespace std;
void foo(float numb1, float numb2) {
	try
	{
		if (numb2 == 0) throw numb2;
		cout << numb1 / numb2 << endl;
	}
	catch (float ex)
	{
		cout << "Error - divide by zero" << endl;
	}
}

void bar(float numb1, float numb2) {
	if (numb2 == 0) throw numb2;
	cout << numb1 / numb2 << endl;
}

void some(float numb1, float numb2) {
	try
	{
		if (numb2 == 0) throw numb2;
		cout << numb1 / numb2 << endl;
		throw "Salam";
	}
	catch (float ex)
	{
		cout << "Error - divide by zero" << endl;
		throw ex;
	}
}

int main() {
	// try-catch
	/*
	try{
		throw exception;
	}
	catch{
		 Handled exceptiond
	}
	*/

#pragma region try-catch
	/*cout << "Start of code" << endl;*/
	/* 
	try
	{
		cout << "Before exception" << endl;

		throw 13;
		
		cout << "After exception" << endl;
	}
	catch (string ex)
	{
		cout << "String exception handled" << endl;
		cout << ex << endl;
	}
	catch (int ex)
	{
		cout << "Int exception handled" << endl;
		cout << ex << endl;
	}

	*/

	// Division by zero exception

	/*try
	{
		float numb1{}, numb2{};
		cout << "Enter first number:" << endl;
		cin >> numb1;
		cout << "Enter second number:" << endl;
		cin >> numb2;
		if (numb2 == 0) throw exception("Error - divide by zero");
		cout << numb1 / numb2 << endl;
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
	}

	cout << "End of code" << endl;*/
#pragma endregion

#pragma region multi exception catch
	//try
	//{
	//	int* arr = nullptr;
	//	int size{};

	//	cout << "Enter array size:" << endl;
	//	cin >> size;
	//	
	//	if (size < 1 || size > 200) throw "\nsize error\n";
	//	
	//	arr = new int[size];
	//	
	//	if(!arr) throw "\nMemmory allocation error\n";

	//	int number{};

	//	cout << "Enter any number:" << endl;
	//	cin >> number;
	//	if (number == 0) throw number;

	//	for (size_t i = 0; i < size; i++)
	//	{
	//		arr[i] = number;
	//	}
	//	throw 0.5;
	//}
	//catch (int ex)
	//{
	//	cout << "Exception about number" << endl;
	//}
	//catch (const char* ex)
	//{
	//	cout << ex << endl;
	//}
	//// Universalniy catch -  catch (...) 
	//// ona doljna bit v konse spiska catch-ov 
	//catch (...) {
	//	cout << "Other exceptions" << endl;
	//}

#pragma endregion

#pragma region function exception handled variation
	/*foo(2, 0);*/
	try
	{
		/*bar(2, 0);*/
		some(2, 8);
	}
	catch (float ex)
	{
		cout << "Error - divide by zero" << endl;
	}
	catch (...) {
		cout << "Ya universalniy moqu poymat vse chto uqodno" << endl;
	}
#pragma endregion
	cout << "Other operations" << endl;
}