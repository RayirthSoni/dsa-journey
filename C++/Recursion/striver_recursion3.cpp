#include <bits/stdc++.h>

using namespace std;

/*
    reverse an array    --> iterative, recursive and directly using function
    indices  =  0   1   2   3   4
    elements =  1   2   3   4   5
   2 pointer =  l               r
   1 pointer =  i

    string palindrome   --> iterative, recursive

*/

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void iterative_reverse_array(int arr[], int n)
{
    int l = 0, r = n - 1;
    while (l < r)
    {
        swap(arr[l], arr[r]);
        l++, r--;
    }
    print_array(arr, n);
}

void recursive_reverse_array(int arr[],int n,int i)
{
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-1-i]);
    recursive_reverse_array(arr,n,i+1);
}

bool is_string_palindrome(string s,int i)
{
    if(i>=s.size()/2){
        return true;
    }
    if(s[i]!= s[s.size()-1-i]){
        return false;
    }
    return is_string_palindrome(s,i+1);
}

int recursive_fibonacci(int num)
{
    if(num<=1){
        return num;
    }
    return recursive_fibonacci(num-1) + recursive_fibonacci(num-2);
}

int main()
{
    int n;
    cout << "Size of array is : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Reversing array using iterative function\n";
    iterative_reverse_array(arr,n);

    
    cout << "Reversing array using recursive function\n";
    recursive_reverse_array(arr,n,0);
    print_array(arr,n);

    cout << "Reversing array using in-built function\n";
    reverse(arr, arr + n);
    print_array(arr, n);

    string s;
    // cin >> s;
    cout << is_string_palindrome("madam",0) << endl;;
    cout << is_string_palindrome("hello",0) << endl;;

    cout << "Recursive Fibonacci for 4 is " << recursive_fibonacci(4) << endl;
    cout << "Recursive Fibonacci for 5 is " << recursive_fibonacci(5) << endl;
    return 0;
}
