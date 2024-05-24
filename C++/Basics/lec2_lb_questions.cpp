// code homework
// 1 to n
// sum from 1 to n
// even sum from 1 to n
// farhenheit to celsius
// prime or not

#include <iostream>

using namespace std;

int main()
{
    int num_terms, i;
    char ch;

    // code homework
    cout << "Enter character : ";
    cin >> ch;
    if (ch > 'a' && ch < 'z')
    {
        cout << "this is lowecase" << endl;
    }
    else if (ch > 'A' && ch < 'Z')
    {
        cout << "this is uppercase" << endl;
    }
    else if (ch > '0' && ch < '9')
    {
        cout << "this is numeric case" << endl;
    }

    // 1 to n
    cout << "Printing 1 to n" << endl;
    cout << "Number of terms = ";
    cin >> num_terms;
    i = 1;
    while (i <= num_terms)
    {
        cout << i << " ";
        i += 1;
    }
    cout << endl;

    // sum from 1 to n
    int sum = 0;
    cout << "\nSum from 1 to n" << endl;
    cout << "Number of terms = " << num_terms << endl;
    i = 1;
    while (i <= num_terms)
    {
        sum += i;
        i += 1;
    }
    cout << "Sum from 1 to " << num_terms << " = " << sum << endl
         << endl;

    // even sum from 1 to n
    sum = 0;
    cout << "Number of terms = " << num_terms << endl;
    cout << "Even sum from 1 to n" << endl;
    i = 1;
    while (i <= num_terms)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i += 1;
    }
    cout << "Even sum from 1 to " << num_terms << " = " << sum << endl
         << endl;

    // farhenheit to celsius
    double far, cel;
    cout << "Enter farhenheit temp = ";
    cin >> far;
    cel = (5.0 / 9) * (far - 32);
    cout << "Celsius Temperature = " << cel << endl
         << endl;

    // prime
    int num;
    cout << "enter number : ";
    cin >> num;
    i = 2;
    while (i < num)
    {
        if (num % i == 0)
        {
            break;
        }
        i += 1;
    }
    (num == i) ? cout << "Number is prime" : cout << "Number is not prime";
    return 0;
}