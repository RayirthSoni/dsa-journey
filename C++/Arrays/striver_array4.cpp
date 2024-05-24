#include <bits/stdc++.h>

using namespace std;

void print_vector(vector<int> &v, int indx)
{
    cout << "Vector : ";
    for (int i = 0; i < indx; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void print_vector(vector<int> &v)
{
    int n = v.size();
    cout << "Vector : ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void print_unmap(unordered_map<int, int> &mp)
{
    for (auto it : mp)
    {
        cout << it.first << " --> " << it.second << endl;
    }
    cout << endl;
}

void print_map(map<int, int> &mp)
{
    for (auto it : mp)
    {
        cout << it.first << " --> " << it.second << endl;
    }
    cout << endl;
}



int main()
{
    return 0;
}