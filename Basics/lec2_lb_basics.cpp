// if else and patterns

// cin --> cant input enter, tab and space
// cin.get() --> to input enter, space and tab
#include <iostream>

using namespace std;

int main()
{
    // cin for space enter and tab
    int a;
    a = cin.get();
    cout << a << endl
         << endl;

    int num1, num2;
    cout << "Enter number 1 : ";
    cin >> num1;
    cout << "Enter number 2 : ";
    cin >> num2;
    if (num1 > num2)
    {
        cout << num1 << " is greater than " << num2 << endl;
    }
    else if (num1 == num2)
    {
        cout << num1 << " is equal to " << num2 << endl;
    }
    else
    {
        cout << num1 << " is lesser than " << num2 << endl;
    }

    return 0;
}