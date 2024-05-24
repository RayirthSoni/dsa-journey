#include <bits/stdc++.h>

using namespace std;

/*
    selection sort  --> find minimum and swap
    bubble sort     --> push max to last using adjacent swaps
    insertion sort  --> takes an element and places it in its correct order
*/

void input_array(int arr[], int n)
{
    cout << "Input the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void print_array(int arr[], int n)
{
    cout << "Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[min_idx] > arr[j])
            {
                min_idx = j;
            }
        }
        if (min_idx != i)
        {
            swap(arr[min_idx], arr[i]);
        }
    }
}

void bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        bool isswap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isswap = 1;
            }
        }
        if (isswap == 0)
        {
            break;
        }
        // cout << "runs";
    }
}

// this is using i as well
void recursive_bubble_sort(int arr[], int n, int i)
{
    if (i == n)
        return;

    bool isswap = 0;
    for (int j = 0; j < n - 1 - i; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
            isswap = 1;
        }
    }

    if (isswap == 0)
        return;

    recursive_bubble_sort(arr, n, i);
}

// this is just using the size
void recursive_bubble_sort(int arr[], int n)
{
    if (n == 1)
        return;

    bool isswap = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            isswap = 1;
        }
    }

    if (isswap == 0)
        return;

    recursive_bubble_sort(arr, n - 1);
}

void insertion_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
}

void recursive_insertion_sort(int arr[], int n, int i)
{
    if (n == i)
        return;

    int j = i;
    int temp = arr[j];
    while (j > 0 && arr[j - 1] > temp)
    {
        arr[j] = arr[j - 1];
        j--;
    }
    arr[j] = temp;
    recursive_insertion_sort(arr, n, i + 1);
}

int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];

    // Doing for selection sort
    input_array(arr, n);
    selection_sort(arr, n);
    print_array(arr, n);

    // // Doing for bubble sort
    input_array(arr, n);
    bubble_sort(arr, n);
    print_array(arr, n);

    // // Doing for insertion sort
    input_array(arr, n);
    insertion_sort(arr, n);
    print_array(arr, n);

    // Doing for recursive bubble sort
    input_array(arr, n);
    recursive_insertion_sort(arr, n, 0);
    print_array(arr, n);

    return 0;
}