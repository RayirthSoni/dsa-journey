#include <bits/stdc++.h>

using namespace std;

/*
    LARGEST ELEMENT
brute --> sort array. then pick last
optimal --> iterate over array, and update to largest value
    SECOND LARGEST ELEMENT
brute --> sort array. start from sec_last if not equal to last then answer else iterate from sec_last to first and check
better --> first find largest by iterative over complete then again iterate for second largest and also check if not equal to largest
optimal -->
    CHECK IF ARRAY SORTED
--> simply check if previous element smaller or not
    REMOVE DUPLICATES FROM SORTED ARRAY
brute --> will use set(as it is unique and sorted) to do so
optimal --> will use 2 pointers and starting indices will be answer rest array don't care.
*/

void input_vector(vector<int> &v)
{
    cout << "Enter the input of size " << v.size() << " : ";
    for (auto &it : v)
    {
        cin >> it;
    }
}

void print_vector(vector<int> &v)
{
    cout << "The array is : ";
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

int get_largest_element(vector<int> &v)
{
    /* brute
     sort(v.begin(),v.end());
     cout << v[v.size()-1];
    */

    /*   optimal
     */
    int num_large = v[0];
    for (int i = 0; i < v.size(); i++)
    {
        if (num_large < v[i])
        {
            num_large = v[i];
        }
    }
    return num_large;
}

int get_second_largest_element(vector<int> &v)
{
    int largest = INT_MIN, second_largest = INT_MIN, n = v.size();

    /*  brute
    sort(v.begin(), v.end());
    for (int i = v.size() - 2; i >= 0; i--)
    {
        if (v[i] != v[n])
        {
            second_largest = v[i];
            break;
        }
    }
    */

    /*  better
    for(int i = 0; i < n ; i++)
    {
        if (v[i] > largest)
        {
            largest = v[i];
        }
    }
    for(int i = 0; i < n; i++)
    {
        if (v[i] != largest && v[i] > second_largest)
        {
            second_largest = v[i];
        }
    }
    */

    /*  optimal
     */
    for (int i = 0; i < n; i++)
    {
        if (v[i] > largest)
        {
            second_largest = largest;
            largest = v[i];
        }
        else if (v[i] < largest && v[i] > second_largest)
        {
            second_largest = v[i];
        }
    }
    return second_largest;
}

int get_smallest_element(vector<int> &v)
{
    /*  brute
    sort(v.begin(),v,end());
    smallest = v[0];
    */

    /*  optimisied
     */
    int smallest = INT_MAX, n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (v[i] < smallest)
        {
            smallest = v[i];
        }
    }
    return smallest;
}

int get_second_smallest_element(vector<int> &v)
{
    int second_smallest = INT_MAX, smallest = INT_MAX, n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (v[i] < smallest)
        {
            second_smallest = smallest;
            smallest = v[i];
        }
        else if (v[i] > smallest && v[i] < second_smallest)
        {
            second_smallest = v[i];
        }
    }
    return second_smallest;
}

bool is_sorted(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < v[i - 1])
        {
            return false;
        }
    }
    return true;
}

int remove_duplicates(vector<int> &v)
{
    set<int> s;
    int n = v.size(), i = 0;
    /*  brute
    for (int i = 0; i < n; i++)
        s.insert(v[i]);

    int indx = 0;
    for (auto it : s)
    {
        v[indx] = it;
        indx++;
    }
    */

    for (int j = 1; j < n; j++)
    {
        if (v[i] != v[j])
        {
            v[i + 1] = v[j];
            i++;
        }
    }

    return (i + 1);
}

int linear_search(vector<int> &v, int num)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (v[i] == num)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n = 7;
    vector<int> v(n);

    // input_vector(v);
    // cout << "Largest Element = " << get_largest_element(v) << endl;
    // cout << "Second Largest Element = " << get_second_largest_element(v) << endl;
    // cout << "Smallest Element = " << get_smallest_element(v) << endl;
    // cout << "Second Smallest Element = " << get_second_smallest_element(v) << endl;
    // cout << "Is array sorted = " << is_sorted(v) << endl;

    // input_vector(v);
    // cout << "Is array sorted = " << is_sorted(v) << endl;
    // int uniq_indx = remove_duplicates(v);
    // for (int i = 0; i < uniq_indx; i++)
    // {
    //     cout << v[i] << " ";
    // }

    vector<int> v2 = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << "Linear Search : " << linear_search(v2, 3);

    return 0;
}