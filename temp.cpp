#include<bits/stdc++.h>

using namespace std;

void print_vector(vector<int> &v)
{
    int n = v.size();
    cout << "Vector : ";
    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void print_vector(vector<int> &v, int indx)
{
    cout << "Vector : ";
    for (int i = 0; i < indx; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

// Sorting
void selection_sort(vector<int> &v) 
{
    int n = v.size();

    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (v[mini] > v[j]) 
            {
                mini = j;
            }
        }
        if (mini != i)
        {
            swap(v[mini],v[i]);
        }
    }
}

void bubble_sort(vector<int> &v) 
{
    int n = v.size();

    for (int i = 0; i < n - 1; i++)
    {
        bool did_swap = 0;
        for (int j = 0; j <= n - 1 - i; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j],v[j+1]);
                did_swap = 1;
            }
        }
    }
}

void insertion_sort(vector<int> &v) 
{
    int n = v.size();

    for (int i = 1; i < n; i++)
    {
        int j = i - 1, key = v[i];
        while (j >= 0 && v[j] > key)
        {
            
            j--;
        }
        
    }

}

// Array
int largest()


int main()
{
    return 0;
}