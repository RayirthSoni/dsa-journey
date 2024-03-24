#include <bits/stdc++.h>

using namespace std;

/*
    Hashing --> precomputation and fetching
    precomputation --> create hash array and store cnt for each element
    fetch --> fetch cnt for reqd element

    for maps
    map --> best,average, worst --> log n
    unordered_map --> best, average --> 1   worst --> n
    first preference unordered_map if time limit exceeds then go to map

    NOTES
    max size for arrays
    inside main     --> int 10e6    bool 10e7
    inside global   --> int 10e7    bool 10e8
    whenever only 1 char use char type
    if small case do s[i] - 'a'
    if upper case do s[i] - 'A'
    if no such condition use 256 as there are 256 ASCII values
*/

void input_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void print_array(int arr[], int n)
{
    for (int i = 0;; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void print_map(map<int, int> mp)
{
    for (auto it : mp)
    {
        cout << it.first << "-->" << it.second << "\n";
    }
    cout << endl;
}

int array_int_frequency(int arr[], int n, int ele)
{
    int hash_arr[21] = {0};
    for (int i = 0; i < n; i++)
    {  
        hash_arr[arr[i]]++;
    }
    return hash_arr[ele];
}

int array_char_frequency(string s, char ele)
{
    int hash_arr[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash_arr[s[i] - 'a']++;
    }
    // print_array(hash_arr,26);
    return hash_arr[ele - 'a'];
}

int map_int_frquency(int arr[], int n, int ele)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    return mp[ele];
}

int map_char_frquency(string s, char ele)
{
    unordered_map<char, int> mpp;
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }
    return mpp[ele];
}

int main()
{
    int n, int_freq = 0, char_freq = 0, mp_int_freq = 0, mp_char_freq = 0;
    cout << "Size of array : ";
    cin >> n;
    int arr[n];
    input_array(arr, n);
    string s;
    cout << "Enter string : ";
    cin >> s;

    // precomputaion
    int_freq = array_int_frequency(arr, n, 2);
    char_freq = array_char_frequency(s, 'a');
    mp_int_freq = map_int_frquency(arr, n, 2);
    mp_char_freq = map_char_frquency(s, 'a');

    // printing fetching results
    cout << "integer frequency using array : " << int_freq << endl
         << "character frequency using array : " << char_freq << endl
         << "integer frequency using unordered_map : " << mp_int_freq << endl
         << "character frequency using unordered_map : " << mp_char_freq << endl;


    return 0;
}