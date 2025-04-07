#include<iostream>
#include<io.h>

using namespace std;

struct Book
{
	char title[50];
	char author[100];
	int page;
	short year;
	float price;
};

void showBook(Book book) {
	cout << "---------------------------------------" << endl;
	cout << "Title:   " << book.title << endl;
	cout << "Author:  " << book.author << endl;
	cout << "Page:    " << book.page << endl;
	cout << "Year:    " << book.year << endl;
	cout << "Price:   " << book.price << " AZN" << endl;
	cout << "---------------------------------------\n" << endl;
}

int main() {
	// Files

	/*
		Mode
			w - Open file for write
			r - Open file for read
			a - Open file for append

			wb - Open file for binary write
			rb - Open file for binary read
			ab - Open file for binary append

	*/
	FILE* file;
	char str[] = "STEP IT Academy is tehe best of the best of the best";
	char buffer[200]{};
#pragma region putc, getc
	// write symbol by symbol
	//fopen_s(&file, "text.txt", "w");
	//// putc(int symb, FILE* stream)

	//if (file != NULL) {
	//	for (int i = 0; str[i] != '\0'; i++)
	//	{
	//		putc(str[i], file);
	//	}
	//}
	//else {
	//	cout << "File open error!!!";
	//}
	//int ready = fclose(file);
	//if (ready == 0) cout << "Save to file successfully!";


	// read symbol by symbol
	// getc(File* file)
	/*fopen_s(&file, "text.txt", "r");

	if (file == NULL) {
		cout << "File not found!!!" << endl;
		return 0;
	}


	int i{};
	while ((buffer[i++] = getc(file)) != EOF);
	fclose(file);

	cout << buffer << endl;*/
#pragma endregion

#pragma region fputs, fgets
	/*fopen_s(&file, "textStr.txt", "w");
	if (file != NULL) {
		fputs(str, file);
	}
	fclose(file);*/

	/*fopen_s(&file, "textStr.txt", "r");
	if (file != NULL) {
		fgets(buffer, 200, file);
	}
	fclose(file);
	cout << buffer << endl;*/
#pragma endregion

#pragma region fprintf, fscanf_s
	/*Book book1{ "RomeoandJuliet", "WilliamShakespeare",123 ,1599, 2304 };
	showBook(book1);

	fopen_s(&file, "Book.dat", "w");

	fprintf(file, "Title: %s Author: %s Page: %d Year: %d Price: %.2f",
		book1.title,
		book1.author,
		book1.page,
		book1.year,
		book1.price);

	fclose(file);
*/
/*Book book2{};
fopen_s(&file, "Book.dat", "r");
fscanf_s(file, "Title: %s Author: %s Page: %d Year: %hd Price: %f",
	book2.title, sizeof(book2.title),
	book2.author, sizeof(book2.author),
	&book2.page,
	&book2.year,
	&book2.price
);
fclose(file);
showBook(book2);*/
#pragma endregion

#pragma region fwrite, fread
/*int number = 15452;
fopen_s(&file, "number.dat", "wb");
fwrite((char*)&number, sizeof(int), 1, file);
fclose(file);*/

/*int numb{};
fopen_s(&file, "number.dat", "rb");
fread((char*)&numb, sizeof(int), 1, file);
fclose(file);
cout << numb + 56 << endl;*/


/*int arr[5]{ 65,45,8,9,64 };
fopen_s(&file, "numbers.dat", "wb");
fwrite((char*)arr, sizeof(int), 5, file);
fclose(file);*/

/*int arr2[5]{};
fopen_s(&file, "numbers.dat", "rb");
fread((char*)arr2, sizeof(int), 5, file);
fclose(file);
for (int i = 0; i < 5; i++)
{
	cout << arr2[i] << ' ';
}
cout << endl;*/

/*Book book1{ "Romeo and Juliet", "William Shakespeare",123 ,1599, 2304 };
showBook(book1);

fopen_s(&file, "book.dat", "wb");
fwrite((char*)&book1, sizeof(book1), 1, file);
fclose(file);*/

/*Book book2;

fopen_s(&file, "book.dat", "rb");
fread((char*)&book2, sizeof(book2), 1, file);
fclose(file);
showBook(book2);*/

#pragma endregion

#pragma region ftell, fseek
// ftell - vozvrashayet v fayle pozisiyu dlya chteniya/zapisi
// fseek - ustanovlivayet v fayle pozisiyu dlya chteniya/zapisi
// SEEK_SET - nachalo fayla
// SEEK_CUR - tekushee polojeniye pozisii dlya chteniya/zapisi
// SEEK_END - kones fayla

//fopen_s(&file, "text.txt", "r");
//fseek(file, 0, SEEK_END);
//int length = ftell(file);
//cout << length << endl;

//for (int i = 1; i <= length; i++)
//{
//	fseek(file, -i, SEEK_END);
//	cout << (char)getc(file);
//}

//for (int i = 9; i <= 19; i++)
//{
//	fseek(file, i, SEEK_SET);
//	cout << (char)getc(file);
//}


//char symb{};
//for (int i = 0; i <= length; i++)
//{
//	fseek(file, i, SEEK_SET);
//	if ((symb = getc(file)) == ' ')
//	{
//		cout << '\n';
//		continue;
//	}
//	cout << symb;
//}
//fclose(file);
#pragma endregion

#pragma region remove, rename
//if (rename("reaname.txt", "Exam is coming.txt") != 0)
//{
//	cout << "Oshibka izmeneniya imeni" << endl;
//}
//else
//{
//	cout << "Udachnoye izmeneniya imeni" << endl;
//}

//if (remove("Exam is coming.txt") != 0)
//{
//	cout << "Oshibka udaleniya" << endl;
//}
//else
//{
//	cout << "Udachnoye udaleniye" << endl;
//}

// cut
//rename("adnan.txt", "../adnan.txt");
#pragma endregion

#pragma region find file

	//struct _finddata_t fileinfo;
	//char path[255]{};
	//long long done = _findfirst("*.*", &fileinfo);
	//while ((_findnext(done, &fileinfo)) == 0)
	//{
	//	strcpy_s(path, fileinfo.name);
	//	/*cout << path << endl;*/
	//	if (strcmp(path, "text1.txt") == 0) {
	//		break;
	//	}
	//}
	//if (strcmp(path, "text1.txt") == 0)
	//{
	//	cout << path << endl;
	//}

	//else
	//{
	//	cout << "File not found" << endl;
	//}

#pragma endregion


}