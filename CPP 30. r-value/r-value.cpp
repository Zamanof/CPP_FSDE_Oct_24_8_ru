#include<iostream>

using namespace std;

void foo(int&& n) {

}

int main() {
	int numb = 45;
	/* 
		l - value:
		to chto mojet naxoditsya 
		sleva ot operatora prisvayivaniya
		l-value - peremenniye, obyekti, funksii i t.d. kotoraya imeet svoy adres
	*/ 
	/* 
		r - value:
		to chto ne mojet naxoditsya
		sleva ot operatora prisvayivaniya
		r-value - literali, virajeniya u katorix "netu svoyeqo adresa)
	*/
	int numb2 = numb + 30;

	// reference to r-value -> &&

	int&& rValueRef = numb + 53;
	foo(numb + 53);
	

}