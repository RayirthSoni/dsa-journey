// patterns

#include <iostream>

using namespace std;

int main()
{
    // pattern 1
    // ***
    // ***
    // ***
    int n, i, j;
    cout << "Pattern 1\n";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << "*";
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    // pattern 2
    // 111
    // 222
    // 333
    cout << "\nPattern 2\n";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << i;
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    // pattern 3
    // 123
    // 123
    // 123
    cout << "\nPattern 3\n";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << j;
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    // pattern 4
    // 123
    // 456
    // 789
    cout << "\nPattern 4\n";
    cin >> n;
    int k = 1;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << k << " ";
            k++;
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    // pattern 5
    // *
    // **
    // ***
    cout << "\nPattern 5\n";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << "*";
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    // // pattern 6
    // 1
    // 22
    // 333
    cout << "\nPattern 6\n";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << i;
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    // // pattern 7
    // 1
    // 23
    // 456
    cout << "\nPattern 7\n";
    cin >> n;
    k = 1, i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << k;
            k++;
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    // // pattern 8
    // 1
    // 23
    // 345
    cout << "\nPattern 8\n";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        k = i;
        j = 1;
        while (j <= i)
        {
            cout << k;
            k++;
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    // // pattern 9
    // 1
    // 21
    // 321
    cout << "\nPattern 9\n";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        k = i;
        while (j <= i)
        {
            cout << k;
            k--;
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    // // pattern 10
    // AAA
    // BBB
    // CCC
    cout << "\nPattern 10\n";
    char ch = 'A';
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << ch;
            j += 1;
        }
        ch++;
        cout << endl;
        i += 1;
    }

    // pattern 11
    // ABC
    // ABC
    // ABC
    cout << "\nPattern 11\n";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        ch = 'A', j = 1;
        while (j <= n)
        {
            cout << ch;
            ch++;
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    // // pattern 12
    cout << "\nPattern 12\n";
    cin >> n;
    ch = 'A', i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << ch;
            ch++;
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    // // pattern 13
    // ABC
    // BCD
    // CDE
    cout << "\nPattern 13\n";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        ch = 'A' + i - 1;
        while (j <= n)
        {
            cout << ch;
            ch++;
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    // // pattern 14
    // A
    // BB
    // CCC
    cout << "\nPattern 14\n";
    cin >> n;
    i = 1;
    ch = 'A';
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << ch;
            j += 1;
        }
        cout << endl;
        ch++;
        i += 1;
    }

    // // pattern 15
    cout << "\nPattern 15\n";
    cin >> n;
    i = 1;
    ch = 'A';
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << ch;
            ch++;
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    // // pattern 16
    // A
    // BC
    // CDE
    cout << "\nPattern 16\n";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        ch = 'A' + i - 1;
        while (j <= i)
        {
            cout << ch;
            ch++;
            j++;
        }
        cout << endl;
        i += 1;
    }

    // // pattern 17
    // D
    // CD
    // BCD
    // ABCD
    cout << "\nPattern 17\n";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        ch = 'A' + n - i;
        while (j <= i)
        {
            cout << ch;
            ch++;
            j++;
        }
        cout << endl;
        i += 1;
    }

    // pattern 18
    //    *
    //   **
    //  ***
    // ****
    cout << "\nPattern 18\n";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n - i)
        {
            cout << " ";
            j++;
        }
        j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    // pattern 19
    // ****
    // ***
    // **
    // *
    cout << "\nPattern 19\n";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = n;
        while (j >= i)
        {
            cout << "*";
            j--;
        }
        cout << endl;
        i++;
    }

    // pattern 20
    // ****
    //  ***
    //   **
    //    *
    cout << "\nPattern 20\n";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j < i)
        {
            cout << " ";
            j++;
        }
        j = 1;
        while (j <= n + 1 - i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    // pattern 21
    cout << "\npattern 21\n";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j < i)
        {
            cout << " ";
            j++;
        }
        j = 1;
        while (j <= n - i + 1)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }

    // pattern 22
    cout << "\nPattern 22\n";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n - i)
        {
            cout << " ";
            j++;
        }
        j = 1;
        while (j <= i)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }

    // pattern 23
    cout << "\nPattern 23\n";
    cin >> n;
    k = 1, i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n - i)
        {
            cout << " ";
            j++;
        }
        j = 1;
        while (j <= i)
        {
            cout << k;
            k++;
            j++;
        }
        cout << endl;
        i++;
    }
    // pattern 24
    //          1
    //        1 2 1
    //      1 2 3 2 1
    //    1 2 3 4 3 2 1
    cout << "\nPattern 24\n";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= 2 * n - 2 * i)
        {
            cout << " ";
            j++;
        }
        j = 1;
        while (j <= i)
        {
            cout << j << " ";
            j++;
        }
        j = i - 1;
        while (j >= 1)
        {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }

    // pattern 25
    // 1 2 3 4 5 5 4 3 2 1
    // 1 2 3 4 * * 4 3 2 1
    // 1 2 3 * * * * 3 2 1
    // 1 2 * * * * * * 2 1
    // 1 * * * * * * * * 1
    cout << "\nPattern 25\n";
    i=n;
    cin>>n;
    while(i>=1)
    {
        j=1;
        while(j<=i)
        {
            cout << j << " ";
            j++;
        }
        j=1;
        while(j<= 2*n- 2*i)
        {
            cout << "*" << " ";
            j++;
        }
        j=i;
        while(j>=1)
        {
            cout << j << " ";
            j--;
        }
        i-=1;
        cout<<endl;
    }

    return 0;
}