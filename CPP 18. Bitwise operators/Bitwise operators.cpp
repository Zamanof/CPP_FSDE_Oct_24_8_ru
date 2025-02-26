#include<iostream>
#include<bitset>
using namespace std;

int main() {
	// https://cdn.cs50.net/2016/x/psets/0/pset0/bulbs.html
	// bitwise operators

#pragma region bitwise not ~
	//char number = 67; // 0 1 0 0 0 0 1 1
	//cout << (int)number << endl;
	//cout << (int)~number << endl; // 1 0 1 1 1 1 0 0
	//cout << (int)(~number + 1) << endl; // 1 0 1 1 1 1 0 1

	//char numb1{ 64 }; // 0 1 0 0 0 0 0 0 
	//char numb2{ 32 }; // 0 0 1 0 0 0 0 0
	//cout << (int)(numb1 + numb2) << endl;
	//cout << (int)(numb1 + (-numb2)) << endl;
	//cout << (int)(numb1 + (~numb2 + 1)) << endl;

#pragma endregion

#pragma region bitwise and &
	// 0 & 0 = 0
	// 0 & 1 = 0
	// 1 & 0 = 0
	// 1 & 1 = 1

	/*unsigned char first{ 3 }, second{ 10 };*/
	/*
		0 0 0 0 0 0 1 1
	  &
		0 0 0 0 1 0 1 0
		---------------
		0 0 0 0 0 0 1 0
	*/

	/*cout << (int)(first & second) << endl;*/

	// proverka "vklyuchennosti" bita
	/*unsigned char diods{ 15 };
	unsigned char mask{ 21 };*/
	/*
		   0 0 0 0 1 1 1 1
		&
		   0 0 0 1 0 1 0 1
	*/

	//cout << (diods & mask) << endl;
	//if ((diods & mask) == mask) {
	//	cout << "Vse proveryayemiye biti vklyucheni" << endl;
	//}
	//else {
	//	cout << "Ne vse proveryayemiye biti vklyucheni" << endl;
	// }

	// "viklyuchit" biti po maske
	/*
		   0 0 0 0 1 1 1 1				0 0 0 0 1 1 1 1
		&                       -> 	  &
		  ~0 0 0 1 0 1 0 1				1 1 1 0 1 0 1 0
									   -----------------
										0 0 0 0 1 0 1 0
	*/
	//cout <<"diods -> "<< bitset<8>(diods) << endl;
	//cout <<"mask  -> "<< bitset<8>(mask) << endl;
	//diods = diods & ~mask; // diods &= ~mask
	//cout << "diods -> " << bitset<8>(diods) << endl;

#pragma endregion

#pragma region bitwise or |
	// 0 | 0 = 0
	// 0 | 1 = 1
	// 1 | 0 = 1
	// 1 | 1 = 1

	//unsigned char diods{ 15 };  // 0 0 0 0 1 1 1 1
	//unsigned char mask{ 18 };	// 0 0 0 1 0 0 1 0
	// "vklyucheniye" bitov po maske
	/*cout <<"diods -> "<< bitset<8>(diods) << endl;
	cout <<"mask  -> "<< bitset<8>(mask) << endl;*/
	//diods |= mask; // diods = diods | mask
	/*
		   0 0 0 0 1 1 1 1
		|
		   0 0 0 1 0 0 1 1
		   ---------------
		   0 0 0 1 1 1 1 1
	*/
	/*cout <<"diods -> "<< bitset<8>(diods) << endl;*/
#pragma endregion

#pragma region bitwise xor ^
	// 0 ^ 0 = 0
	// 0 ^ 1 = 1
	// 1 ^ 0 = 1
	// 1 ^ 1 = 0

	// "pereklyuchat" biti po maske

	//unsigned char diods{ 15 };  // 0 0 0 0 1 1 1 1
	//unsigned char mask{ 255 };	// 1 1 1 1 1 1 1 1
	//cout <<"diods -> "<< bitset<8>(diods) << endl;
	//cout <<"mask  -> "<< bitset<8>(mask) << endl;
	//diods ^= mask; // diods = diods | mask
	///*
	//	   0 0 0 0 1 1 1 1
	//	^
	//	   1 1 1 1 1 1 1 1
	//	   ---------------
	//	   1 1 1 1 0 0 0 0
	//*/
	//cout <<"diods -> "<< bitset<8>(diods) << endl;
	//diods ^= mask; // diods = diods | mask
	//cout <<"diods -> "<< bitset<8>(diods) << endl;


	// prostaya shfrovka teksta
	char password[20];
	cout << "Enter password:" << endl;
	gets_s(password, 20);
	cout << "Normal password -> " << password << endl;
	int key{};
	cout << "Enter secret key:" << endl;
	cin >> key;
	// encode
	for (int i = 0; i < strlen(password); i++)
	{
		password[i] ^= key;
	}
	cout << "Cipher password -> " << password << endl;
	cout << "Enter secret key:" << endl;
	cin >> key;

	// decode
	for (int i = 0; i < strlen(password); i++)
	{
		password[i] ^= key;
	}
	cout << "Normal password -> " << password << endl;


#pragma endregion




}