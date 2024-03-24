#include <bits/stdc++.h>

using namespace std;

/*
merge sort --> divide and merge | Time Complexity --> O(n*logn) | Auxiliary Space --> O(n)
quick sort --> Rules are below  | Time Complexity --> O(n*logn) | Auxiliary Space --> O(n)
           --> pick a pivot and place it at its correct place in sorted array
           --> smaller on left and larger on right
pivot can be anything first element, last element, median or random anything.
*/

void input_vector(vector<int> &v)
{
    cout << "Enter the input vector of size " << v.size() << " : ";
    for (auto &it : v)
    {
        cin >> it;
    }
}

void print_vector(vector<int> &v)
{
    cout << "The vector is : ";
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

// merge sort
void merge(vector<int> &v, int low, int mid, int high)
{
    /*
        [low, mid]
        [mid + 1, high]
    */

    int left = low, right = mid + 1;
    vector<int> ans;

    while (left <= mid && right <= high)
    {
        if (v[left] < v[right])
        {
            ans.push_back(v[left]);
            left++;
        }
        else
        {
            ans.push_back(v[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        ans.push_back(v[left]);
        left++;
    }

    while (right <= high)
    {
        ans.push_back(v[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        v[i] = ans[i - low];
    }
}

void merge_sort(vector<int> &v, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    merge_sort(v, low, mid);
    merge_sort(v, mid + 1, high);
    merge(v, low, mid, high);
}

// quick sort
int partition(vector<int> &v, int low, int high)
{
    int pivot = v[low];
    int i = low, j = high;
    while (i < j)
    {
        while (v[i] <= pivot && i <= high - 1)
        {
            i++;
        }

        while (v[j] > pivot && j >= low + 1)
        {
            j--;
        }

        if (i < j)
            swap(v[i], v[j]);
    }
    swap(v[j], v[low]);
    return j;
}

void quick_sort(vector<int> &v, int low, int high)
{
    if (low < high)
    {
        int p_indx = partition(v, low, high);
        quick_sort(v, low, p_indx - 1);
        quick_sort(v, p_indx + 1, high);
    }
}

int main()
{
    int n = 9;
    vector<int> v(n);
    input_vector(v);
    quick_sort(v, 0, v.size() - 1);
    print_vector(v);
    return 0;
}