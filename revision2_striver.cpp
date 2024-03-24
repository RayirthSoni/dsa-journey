#include <bits/stdc++.h>

using namespace std;

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

/*
    ARRAY
*/

int get_largest(vector<int> &v)
{
    int n = v.size(), maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > maxi)
        {
            maxi = v[i];
        }
    }
    return maxi;
}

int get_smallest(vector<int> &v)
{
    int n = v.size(), mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < mini)
        {
            mini = v[i];
        }
    }
    return mini;
}

int get_second_largest(vector<int> &v)
{
    int n = v.size(), maxi = INT_MIN, maxi2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > maxi)
        {
            maxi2 = maxi;
            maxi = v[i];
        }
        else if (v[i] < maxi && v[i] > maxi2)
        {
            maxi2 = v[i];
        }
    }
    return maxi2;
}

int get_second_smallest(vector<int> &v)
{
    int n = v.size(), mini = INT_MAX, mini2 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < mini)
        {
            mini2 = mini;
            mini = v[i];
        }
        else if (v[i] > mini && v[i] < mini2)
        {
            mini2 = v[i];
        }
    }
    return mini2;
}

bool is_sorted_check(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i <= n - 2; i++)
    {
        if (v[i] > v[i + 1])
        {
            return false;
        }
    }
    return true;
}

int linear_search(vector<int> &v, int ele)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (v[i] == ele)
        {
            return i;
        }
    }
    return -1;
}

int remove_duplicates(vector<int> &v)
{
    int n = v.size(), i = 0;
    for (int j = i + 1; j < n; j++)
    {
        if (v[i] != v[j])
        {
            v[i + 1] = v[j];
            i++;
        }
    }
    return (i + 1);
}

void left_rotate_d_places(vector<int> &v, int d)
{
    print_vector(v);
    int n = v.size();

    d = d % n;

    if (n == 0)
        return;
    if (d == 0)
        return;

    reverse(v.begin(), v.begin() + d);
    reverse(v.begin() + d, v.end());
    reverse(v.begin(), v.end());

    print_vector(v);
}

void right_rotate_d_places(vector<int> &v, int d)
{
    print_vector(v);

    int n = v.size();
    vector<int> tmp;

    d = d % n;

    if (n == 0)
        return;
    if (d == 0)
        return;

    reverse(v.begin(), v.begin() + n - d);
    reverse(v.begin() + n - d, v.end());
    reverse(v.begin(), v.end());

    print_vector(v);
}

void move_zeroes_end(vector<int> &v)
{
    int n = v.size(), i, j;
    vector<int> tmp;
    for (i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            break;
        }
    }
    for (j = i + 1; j < n; j++)
    {
        if (v[j] != 0)
        {
            swap(v[i], v[j]);
            i++;
        }
    }
    print_vector(v);
}

void get_union(vector<int> &a, vector<int> &b)
{
    int n = a.size(), m = b.size(), i = 0, j = 0;
    vector<int> union_vec;

    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            if (union_vec.size() == 0 || union_vec.back() != a[i])
            {
                union_vec.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (union_vec.size() == 0 || union_vec.back() != b[j])
            {
                union_vec.push_back(b[j]);
            }
            j++;
        }
    }

    while (i < n)
    {
        if (union_vec.size() == 0 || union_vec.back() != a[i])
        {
            union_vec.push_back(a[i]);
        }
        i++;
    }

    while (j < m)
    {
        if (union_vec.size() == 0 || union_vec.back() != b[j])
        {
            union_vec.push_back(b[j]);
        }
        j++;
    }

    print_vector(union_vec);
}

void get_intersection(vector<int> &a, vector<int> &b)
{
    int n = a.size(), m = b.size(), i = 0, j = 0;
    vector<int> intersection_vec;

    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            intersection_vec.push_back(a[i]);
            i++, j++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
    }

    print_vector(intersection_vec);
}

int get_missing_number(vector<int> &v)
{
    int n = v.size(), xor1 = 0, xor2 = 0;

    for (int i = 0; i < n; i++)
    {
        xor1 ^= v[i];
        xor2 ^= (i + 1);
    }
    xor2 ^= (n + 1);
    return xor1 ^ xor2;
}

int get_max_consec_one(vector<int> &v)
{
    int n = v.size(), cnt = 0, maxi = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            cnt++;
            maxi = max(maxi, cnt);
        }
        else
        {
            cnt = 0;
        }
    }
    return maxi;
}

int get_once_appearance(vector<int> &v)
{
    int n = v.size(), xor1 = 0;
    for (int i = 0; i < n; i++)
    {
        xor1 ^= v[i];
    }
    return xor1;
}

int main()
{
    vector<int> v1 = {82, 88, 71, 50, 42, 63, 77, 98, 1, 3, 19, 13, 98, 27, 25, 100, -32, -34, 89, -100, 8, -98, -43, -11, 45, -60, 23, -54, 77, -76, -88, 11, -98, 4, -100, 43, 4, 5, 7};
    vector<int> v_srt = {-100, -91, -75, -60, -50, -50, -42, -37, -22, -11, -5, -5, 0, 1, 8, 8, 8, 11, 15, 21, 29, 33, 42, 44, 52, 60, 70, 88, 88, 92, 100, 100};
    vector<int> v_rd = {1, 1, 2, 2, 2, 3, 3, 4, 5, 7, 7, 7, 9, 9, 9, 11, 11, 14, 15, 15, 21, 21, 24};
    vector<int> v_rotate = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> v_mz = {1, 2, 0, 0, 4, 5, 6, 0, 1, 1, 4, 0, 0, 0, 3, 3, 5, 2, 0, 0, 1};
    vector<int> v_msnum = {1, 4, 2, 7, 3, 6, 8};
    vector<int> v_onecnt = {0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0};
    vector<int> v_onceappear = {2, 4, 4, 1, 5, 7, 8, 2, 5, 1, 7, 9, 11, 42, 42, 11, 9};

    vector<int> a = {1, 1, 2, 2, 2, 3, 5, 7, 7, 9, 11, 13};
    vector<int> b = {1, 2, 2, 4, 5, 7, 7, 8, 10, 14};

    cout << "Largest : " << get_largest(v1) << endl
         << "Smallest : " << get_smallest(v1) << endl
         << "Second Largest : " << get_second_largest(v1) << endl
         << "Second Smallest : " << get_second_smallest(v1) << endl
         << "Is sorted : " << is_sorted_check(v1) << endl
         << "Is sorted : " << is_sorted_check(v_srt) << endl
         << "Unique Elements in Array : " << remove_duplicates(v_rd) << endl;

    left_rotate_d_places(v_rotate, 0);
    left_rotate_d_places(v_rotate, 3);

    right_rotate_d_places(v_rotate, 0);
    right_rotate_d_places(v_rotate, 3);

    move_zeroes_end(v_mz);

    cout << "Missing number in 1 to " << (v_msnum.size() + 1) << " : " << get_missing_number(v_msnum) << endl;

    get_union(a, b);
    get_intersection(a, b);

    cout << "Maximum Consecutive Ones : " << get_max_consec_one(v_onecnt) << endl
         << "Number once Appearance : " << get_once_appearance(v_onceappear) << endl;

    return 0;
}