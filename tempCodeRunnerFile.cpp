#include <bits/stdc++.h>

using namespace std;

// Print
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

void print_vector(vector<int> &v, int indx)
{
    cout << "Vector : ";
    for (int i = 0; i < indx; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

// Sort
void selection_sort(vector<int> &v)
{
    cout << "Selection Sort\n";
    print_vector(v);

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
            swap(v[mini], v[i]);
    }

    print_vector(v);
}

void bubble_sort(vector<int> &v)
{
    cout << "Bubble Sort\n";

    print_vector(v);
    int n = v.size();

    for (int i = 0; i < n - 1; i++)
    {
        bool did_swap = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                did_swap = 1;
            }
        }

        if (did_swap == 0)
            break;
    }

    print_vector(v);
}

void insertion_sort(vector<int> &v)
{
    cout << "Insertion Sort\n";

    print_vector(v);
    int n = v.size();

    for (int i = 1; i < n; i++)
    {
        int j = i - 1, key = v[i];
        while (j >= 0 && v[j] > key)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }

    print_vector(v);
}

void merge(vector<int> &v, int low, int mid, int high)
{
    int left = low, right = mid + 1;
    vector<int> tmp;

    while (left <= mid && right <= high)
    {
        if (v[left] <= v[right])
        {
            tmp.push_back(v[left]);
            left++;
        }
        else
        {
            tmp.push_back(v[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        tmp.push_back(v[left]);
        left++;
    }

    while (right <= high)
    {
        tmp.push_back(v[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        v[i] = tmp[i - low];
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

int partition(vector<int> &v, int low, int high)
{
    int pivot = v[low], i = low, j = high;

    while (i < j)
    {
        while (i < high && pivot >= v[i])
        {
            i++;
        }

        while (j > low && pivot < v[j])
        {
            j--;
        }

        if (i < j)
        {
            swap(v[i], v[j]);
        };
    }
    swap(v[low], v[j]);

    return j;
}

void quick_sort(vector<int> &v, int low, int high)
{
    if (low < high)
    {
        int part_indx = partition(v, low, high);
        quick_sort(v, low, part_indx - 1);
        quick_sort(v, part_indx + 1, high);
    }
}

// Array
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
        else if (v[i] > maxi2 && v[i] < maxi)
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

bool is_sorted(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i <= n - 2; i++)
    {
        if (v[i] > v[i + 1])
            return false;
    }
    return true;
}

int remove_duplicates(vector<int> &v)
{
    int n = v.size();

    int i = 0, j;

    for (j = i + 1; j < n; j++)
    {
        if (v[i] != v[j])
        {
            v[i + 1] = v[j];
            i++;
        }
    }

    print_vector(v, i + 1);

    return (i + 1);
}

int linear_search(vector<int> &v, int ele)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (v[i] == ele)
            return i;
    }
    return -1;
}

void left_rotate(vector<int> &v, int d)
{
    print_vector(v);

    vector<int> tmp;
    int n = v.size();
    d = d % n;

    if (n == 0 || n == 1)
        return;

    if (d == 0)
        return;

    reverse(v.begin(), v.begin() + d);
    reverse(v.begin() + d, v.end());
    reverse(v.begin(), v.end());

    print_vector(v);
}

void right_rotate(vector<int> &v, int d)
{
    print_vector(v);

    vector<int> tmp;
    int n = v.size();
    d = d % n;

    if (n == 0 || n == 1)
        return;

    if (d == 0)
        return;

    reverse(v.end() - d, v.end());
    reverse(v.begin(), v.end() - d);
    reverse(v.begin(), v.end());

    print_vector(v);
}

void move_zeroes_end(vector<int> &v)
{
    int n = v.size();
    print_vector(v);

    int i = 0, j;
    for (i = 0; i < n; i++)
    {
        if (v[i] == 0)
            break;
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
    cout << "Union Vector" << endl;
    print_vector(a);
    print_vector(b);

    int n = a.size(), m = b.size(), i = 0, j = 0;
    vector<int> union_vec;

    while (i < n && j < m)
    {
        if (a[i] <= b[j])
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
    cout << "Intersection Vector" << endl;

    print_vector(a);
    print_vector(b);

    int n = a.size(), m = b.size(), i = 0, j = 0;
    vector<int> intersection_vec;
    vector<bool> hash_vec(m, false);

    while (i < n)
    {
        while (j < m)
        {
            if (a[i] == b[j] && hash_vec[j] == false)
            {
                intersection_vec.push_back(a[i]);
                hash_vec[j] = true;
                i++, j++;
            }
            else if (a[i] < b[j])
            {
                break;
            }
        }
    }

    print_vector(intersection_vec);
}

int get_missing_number(vector<int> &v)
{
    int n = v.size(), N = n + 1;
    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < n; i++)
    {
        xor1 ^= v[i];
        xor2 ^= (i + 1);
    }

    xor2 ^= N;

    return xor1 ^ xor2;
}

int get_consec_one_cnt(vector<int> &v)
{
    int n = v.size();
    int cnt = 0, maxi = 0;

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

int get_num_once_appearance(vector<int> &v)
{
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[i] == v[j])
            {
                cnt++;
            }
        }
        if (cnt == 1)
            return v[i];
    }
    return -1;
}

int main()
{
    vector<int> v = {-24, 0, 69, 75, -1, -100, 4, 1, -100, 50, -88, 5, 75, 98, -32, -100, -98, 100, -5, 1, 27, 100, 11, -37, -49, 88, 45, -67, -75};
    vector<int> v_srt = {-98, -81, -70, -50, -33, -21, -10, -7, 0, 5, 11, 15, 21, 33, 42, 57, 69, 73, 88, 98};
    vector<int> v_rd = {1, 1, 2, 3, 4, 4, 4, 5, 6, 6, 7, 7, 7, 8, 8, 9, 9, 10, 10, 11, 12, 12};
    vector<int> v_rte = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> v_mz = {2, 5, 0, 1, 8, 11, 0, 0, 3, 2, 6, 0, 0, 0, 1, 122, 0, 32, -1, -5, 0, 0, 6, 19, 12, 100, 32, 6, 0, 0, 7, 4, 6};
    vector<int> v_mn = {1, 5, 9, 2, 3, 4, 7, 6};
    vector<int> v_cveone = {0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 1};
    vector<int> v_once_aprnce = {5, 1, 9, 10, 24, 37, 68, 2, 2, 37, 19, 14, 1, 9, 5, 10, 19, 24, 68, 88, 98, 14, 50, 50, 88};

    vector<int> v_slct_srt = {7, -1, 98, 25, 29, -32, -88, 13, 69, 37, 0, 6, 1, -3, 0, 75, 49, 24, 19, -11, 58, -98, -27, 20, -37, -75, 88};
    vector<int> v_bble_srt = {7, -1, 98, 25, 29, -32, -88, 13, 69, 37, 0, 6, 1, -3, 0, 75, 49, 24, 19, -11, 58, -98, -27, 20, -37, -75, 88};
    vector<int> v_insrt_srt = {7, -1, 98, 25, 29, -32, -88, 13, 69, 37, 0, 6, 1, -3, 0, 75, 49, 24, 19, -11, 58, -98, -27, 20, -37, -75, 88};
    vector<int> v_mrg_srt = {7, -1, 98, 25, 29, -32, -88, 13, 69, 37, 0, 6, 1, -3, 0, 75, 49, 24, 19, -11, 58, -98, -27, 20, -37, -75, 88};
    vector<int> v_qck_srt = {7, -1, 98, 25, 29, -32, -88, 13, 69, 37, 0, 6, 1, -3, 0, 75, 49, 24, 19, -11, 58, -98, -27, 20, -37, -75, 88};

    vector<int> a = {1, 1, 1, 3, 5, 5, 5, 7, 7, 9, 11, 11, 12, 12, 12, 13, 15, 17, 17, 18, 19};
    vector<int> b = {1, 1, 2, 2, 2, 4, 6, 8, 8, 10, 10, 11, 12, 12, 12, 14, 16, 16, 18, 20};

    selection_sort(v_slct_srt);
    bubble_sort(v_bble_srt);
    insertion_sort(v_insrt_srt);

    cout << "Merge Sort" << endl;
    print_vector(v_mrg_srt);
    merge_sort(v_mrg_srt, 0, v_mrg_srt.size() - 1);
    print_vector(v_mrg_srt);

    cout << "Quick Sort" << endl;
    print_vector(v_qck_srt);
    merge_sort(v_qck_srt, 0, v_qck_srt.size() - 1);
    print_vector(v_qck_srt);

    cout << endl
         << endl
         << "Largest : " << get_largest(v) << endl
         << "Smallest : " << get_smallest(v) << endl
         << "Second Largest : " << get_second_largest(v) << endl
         << "Second Smallest : " << get_second_smallest(v) << endl
         << "Is Sorted : " << is_sorted(v) << endl
         << "Is Sorted : " << is_sorted(v_srt) << endl
         << "Linear Search : " << linear_search(v, -100) << endl
         << "Linear Search : " << linear_search(v, 1) << endl
         << "Linear Search : " << linear_search(v, 200) << endl
         << "Remove Duplicates : " << remove_duplicates(v_rd) << endl
         << "Missing Number : " << get_missing_number(v_mn) << endl
         << "Max Consecutive One : " << get_consec_one_cnt(v_cveone) << endl
         << "Once Appearance : " << get_num_once_appearance(v_once_aprnce) << endl;

    cout << endl
         << endl;

    left_rotate(v_rte, 0);
    left_rotate(v_rte, 12);
    right_rotate(v_rte, 0);
    right_rotate(v_rte, 3);
    move_zeroes_end(v_mz);

    get_union(a, b);
    get_intersection(a, b);

    return 0;
}