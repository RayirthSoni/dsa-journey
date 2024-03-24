#include <bits/stdc++.h>

using namespace std;

/*
    LEFT ROTATE BY 1 PLACE
brute --> store, shift put back using tmp
optimised --> store, shift put back in same
    LEFT ROTATE BY D PLACES
brute --> store, shift put back in same
optimised --> using reverse
    RIGHT ROTATE BY 1 PLACE
brute --> store shift put back using another tmp
optimised --> store shift put back in same
    RIGHT ROTATE BY D PLACES
brute --> store, shift, put back in same
optimised --> use reverse
    MOVE ZEROES TO END
brute --> use tmp to store non zero, then iterate to store non zero back and then in remaining store 0
optimised --> 2 pointers
    LINEAR SEARCH
brute --> iterate over array and if found return that else -1
    UNION
brute --> using set iterate over both and get elements
better -->
optimised -->
    INTERSECTION
brute -->
better -->
optimised -->
*/

void print_vector(vector<int> &v)
{
    cout << "Vector : ";
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

void print_set(set<int> &s)
{
    cout << "Set : ";
    for (auto it : s)
    {
        cout << it << " ";
    }
    cout << endl;
}

vector<int> left_rotate_one(vector<int> &v)
{
    int n = v.size();

    /*  Brute --> store, shift and put back using another temp
    vector<int> tmp(v.size());

    // store
    int st = v[0];

    // shift
    for (int i = 1; i < n; i++)
        tmp[i - 1] = v[i];

    // put back
    tmp[n - 1] = st;
     */

    /*  Optimal --> store, shift and put back using same vector
     */

    // store
    int st = v[0];

    // shift
    for (int i = 1; i < n; i++)
        v[i - 1] = v[i];

    // put back
    v[n - 1] = st;

    return v;
}

vector<int> left_rotate_d(vector<int> &v, int d)
{
    int n = v.size();
    d = d % n;
    if (d == 0)
        return v;

    /*  Brute --> store, shift and put back

    // store
    vector<int> tmp;
    for (int i = 0; i < d; i++)
    {
        tmp.push_back(v[i]);
    }

    // shift
    for (int i = d; i < n; i++)
    {
        v[i - d] = v[i];
    }

    // put back
    for (int i = n - d; i < n; i++)
    {
        v[i] = tmp[i - (n - d)];
    }
     */

    /* Optimised --> using reverse
     */
    reverse(v.begin(), v.begin() + d);
    reverse(v.begin() + d, v.begin() + n);
    reverse(v.begin(), v.begin() + n);

    return v;
}

int linear_search(vector<int> &v, int ele)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (ele == v[i])
        {
            return i;
        }
    }
    return -1;
}

vector<int> move_zeroes_end(vector<int> &v)
{
    int n = v.size();
    /*  Brute --> use tmp to store non zero and then put them back and then in remaining store 0
    vector<int> tmp;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            tmp.push_back(v[i]);
        }
    }

    int n_tmp = tmp.size();
    for (int i = 0; i < n_tmp; i++)
    {
        v[i] = tmp[i];
    }

    for (int i = n_tmp; i < n; i++)
    {
        v[i] = 0;
    }
     */

    /* Optimal --> use 2 pointers
     */
    int i, j;
    for (i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            break;
        }
    }
    j = i + 1;
    while (j < n)
    {
        if (v[j] != 0)
        {
            swap(v[j], v[i]);
            i++;
        }
        j++;
    }
    return v;
}

vector<int> get_union(vector<int> &a, vector<int> &b)
{
    int n1 = a.size(), n2 = b.size();

    /*  Brute --> using set
    set<int> s;
    vector<int> ans_union;
    for (int i = 0; i < n1; i++)
    {
        s.insert(a[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        s.insert(b[i]);
    }
    for(auto it : s)
    {
        ans_union.push_back(it);
    }
     */

    /* Optimal --> use 2 pointers
     */
    int i = 0, j = 0;
    vector<int> ans;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            if (ans.size() == 0 || ans.back() != a[i])
            {
                ans.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (ans.size() == 0 || ans.back() != b[j])
            {
                ans.push_back(b[j]);
            }
            j++;
        }
    }
    while (i < n1)
    {
        if (ans.size() == 0 || ans.back() != a[i])
            ans.push_back(a[i]);
        i++;
    }
    while (j < n2)
    {
        if (ans.size() == 0 || ans.back() != b[j])
            ans.push_back(b[j]);
        j++;
    }
    return ans;
}

vector<int> get_intersection(vector<int> &a, vector<int> &b)
{
    int n1 = a.size(), n2 = b.size();
    int i = 0, j = 0;
    vector<int> ans;
    /*  Brute --> use visited array
    vector<int> visited(n2, 0);
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (a[i] == b[j] && visited[j] == 0)
            {
                ans.push_back(a[i]);
                visited[j] = 1;
                break;
            }
        }
    }
     */

    /* Optimised --> 2 pointer
     */
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] == b[j])
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    print_vector(v);

    vector<int> v_lr1 = left_rotate_one(v);
    print_vector(v_lr1);

    vector<int> v_lrd = left_rotate_d(v, 2);
    print_vector(v_lrd);

    vector<int> v_ls = {5, 1, 3, 6, 98, 23, 54, 12, 35};
    cout << "Linear Search : " << linear_search(v_ls, 6) << endl;

    vector<int> v_k = {1, 2, 0, 5, 0, 0, 21, 0, 6, 0, 44, 92, 0};
    vector<int> v_z = move_zeroes_end(v_k);
    print_vector(v_z);

    vector<int> a = {1, 1, 2, 2, 3, 4, 4, 6, 6}, b = {1, 2, 2, 3, 3, 5, 7};
    vector<int> ans_union, ans_intersection;
    ans_union = get_union(a, b);
    print_vector(ans_union);
    ans_intersection = get_intersection(a, b);
    print_vector(ans_intersection);

    return 0;
}