#include <iostream>

using namespace std;

/*
Basic
DataType
Bits
Negative Number
*/

int main()
{
    int a = 10;
    cout << "The value of a is : " << a << endl;
    char ch = 's';
    cout << "The value of ch is : " << ch << endl;
    float f = 2.3;
    cout << "The value of f is : " << f << endl;
    double d = 2.35;
    cout << "The value of d is : " << d << endl;

    // char to int
    cout << "ch in int : " << (int)ch << endl;

    // sizeof
    cout << "Size of char is : " << sizeof(char) << endl
         << "Size of bool is : " << sizeof(bool) << endl
         << "Size of int is : " << sizeof(int) << endl
         << "Size of float is : " << sizeof(float) << endl
         << "Size of double is : " << sizeof(double) << endl;

    // operators
    cout << "5/2.4 = " << 5 / 2.4 << endl; // if stored in some int variable then will get int
    cout << "(21 == (11 + 10) || 21 == (20)) = " << (21 == (11 + 10) || 21 == (20)) << endl
         << "(21 == (11 + 10) && 5 == (3 + 1)) = " << (21 == (11 + 10) && 5 == (3 + 1)) << endl
         << "!(0) = " << !(0) << endl
         << "!(21) = " << !(21) << endl;

    return 0;
}