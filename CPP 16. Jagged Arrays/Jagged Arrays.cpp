#include <iostream>
#include<iostream>

using namespace std;
int main()
{
    // jagged array
    int arr[3][10]{}; // 3 * 10 * 4 = 120 byte

    int************* jagged; // 
    /*jagged[0] = new int[3];
    jagged[1] = new int[10];
    jagged[2] = new int[1];*/
    cout << sizeof(jagged) << endl;
}
