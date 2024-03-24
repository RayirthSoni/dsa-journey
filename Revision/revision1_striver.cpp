#include <bits/stdc++.h>

using namespace std;

/*
    MATHS
    ITERATIVE
    RECURSION
    HASHING
    SORTING
*/

void print_vector(vector<int> &v)
{
    int n = v.size();
    cout << "Vector : ";
    for (int i = 0; i <= n - 1; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void print_map(map<int, int> &mpp)
{
    for (auto it : mpp)
    {
        cout << it.first << " --> " << it.second << endl;
    }
    cout << endl;
}

/*
    MATHS

    COUNT DIGITS                    (DONE)
    REVERSE NUMBER                  (DONE)
    PALINDROME                      (DONE)
    ARMSTRONG                       (DONE)
    GCD | HCF                       (DONE)
    LCM                             (DONE)
    EUCLID ALGO                     (DONE)
    ALL DIVISORS                    (DONE)
    CHECK FOR PRIME                 (DONE)
    PRIME IN RANGE                  (DONE)
    ARMSTRONG IN RANGE              (DONE)
    ROOTS OF EQUATION               (DONE)
    MAXIMUM                         (DONE)
    MINIMUM                         (DONE)
    TRIANGLE TYPE                   (DONE)
    FIBONACCI                       (DONE)
    VOTER AGE                       (DONE)
*/

void get_digit_cnt(int num)
{
    int cnt = 0, tmp = num;
    while (num > 0)
    {
        num /= 10;
        cnt++;
    }
    cout << tmp << " has digits : " << cnt << endl;
}

void get_reverse_number(int num)
{
    int tmp = num, rev_num = 0;
    while (num > 0)
    {
        rev_num = num % 10 + rev_num * 10;
        num /= 10;
    }
    cout << tmp << "\tReverse Number : " << rev_num << endl;
}

void chk_voter(int age)
{
    cout << "Voter age : " << age << endl;
    if (age >= 18)
        cout << "Yes\n";
    else
        cout << "No\n";
}

void get_triangle_type(int a, int b, int c)
{
    cout << "Sides of Triangle are : " << a << "  " << b << "  " << c << endl;
    if (a == b && a == c)
    {
        cout << "Equilateral Triangle\n";
    }
    else if (a != b && b != c && a != c)
    {
        cout << "Scalene Triangle\n";
    }
    else
    {
        cout << "Isoceles Triangle\n";
    }
}

void chk_palindrome(int num)
{
    int tmp = num, rev_num = 0;
    while (num > 0)
    {
        rev_num = num % 10 + rev_num * 10;
        num /= 10;
    }
    if (tmp == rev_num)
        cout << "Palindrome\n";
    else
        cout << "Not Palindrome\n";
}

void chk_armstrong(int num)
{
    int tmp = num, arm_num = 0;
    while (num > 0)
    {
        arm_num = pow(num % 10, 3) + arm_num;
        num /= 10;
    }
    if (tmp == arm_num)
        cout << "Armstrong Number\n";
    else
        cout << "Not Armstrong Number\n";
}

void get_gcd(int a, int b)
{
    int mini = min(a, b), gcd_num = 1;
    for (int i = mini; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd_num = i;
            break;
        }
    }
    cout << "GCD : " << gcd_num << endl;
}

void get_lcm(int a, int b)
{
    int maxi = max(a, b), lcm_num = a * b;
    for (int i = maxi; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            lcm_num = i;
            break;
        }
    }
    cout << "LCM : " << lcm_num << endl;
}

void euclid_algo(int a, int b)
{
    int ans = 1;
    while (a != 0 && b != 0)
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }
    (a == 0) ? ans = b : ans = a;
    cout << "GCD : " << ans << endl;
}

void get_divisors(int n)
{
    vector<int> divs;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divs.push_back(i);
            if (n / i != i)
            {
                divs.push_back(n / i);
            }
        }
    }
    sort(divs.begin(), divs.end());
    print_vector(divs);
}

void chk_prime(int n)
{
    int factors = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            factors++;
            if (n / i != i)
            {
                factors++;
            }
        }
    }
    if (factors == 2)
        cout << "Prime\n";
    else
        cout << "Not Prime\n";
}

void get_prime_rng(int a, int b)
{
    vector<int> ans;
    for (int i = a; i <= b; i++)
    {
        int factors = 0;
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                factors++;
                if (i / j != j)
                {
                    factors++;
                }
            }
        }
        if (factors == 2)
            ans.push_back(i);
    }
    print_vector(ans);
}

void get_armstrong_rng(int a, int b)
{
    vector<int> ans;
    for (int i = a; i <= b; i++)
    {
        int tmp = i, arm_num = 0;
        while (tmp > 0)
        {
            arm_num = pow(tmp % 10, 3) + arm_num;
            tmp /= 10;
        }
        if (arm_num == i)
            ans.push_back(arm_num);
    }
    print_vector(ans);
}

void get_eqn_roots(double a, double b, double c)
{
    cout << a << "x2 + " << b << "x + " << c << endl;
    double D = pow(b, 2) - 4 * a * c;
    double D_root = sqrt(D);
    if (D > 0)
    {
        cout << "Roots of equation are real and distinct\n";
        double root1 = (-1 * b + D_root) / (2 * a);
        double root2 = (-1 * b - D_root) / (2 * a);
        cout << "Roots are : " << root1 << "\t" << root2 << "\n";
    }
    else if (D == 0)
    {
        cout << "Roots of equation are identical\n";
        double root1 = (-1 * b + D_root) / (2 * a);
        double root2 = (-1 * b - D_root) / (2 * a);
        cout << "Roots are : " << root1 << "\t" << root2 << "\n";
    }
    else
    {
        cout << "Roots of equation are imaginary\n";
        double real_prt = (-1 * b) / (2 * a);
        double img_prt = sqrt(D * -1) / (2 * a);
        cout << "Roots are : " << real_prt << " + i" << img_prt << "\t"
             << real_prt << " - i" << img_prt << "\t\n";
    }
}

void get_maximum(int a, int b, int c)
{
    int maxi, maxi2, maxi3;
    if (a >= b && a >= c)
    {
        maxi = a;
        (b > c) ? (maxi2 = b, maxi3 = c) : (maxi2 = c, maxi3 = c);
    }
    else if (b >= a && b >= c)
    {
        maxi = b;
        (a > c) ? (maxi2 = a, maxi3 = c) : (maxi2 = c, maxi3 = a);
    }
    else
    {
        maxi = c;
        (a > b) ? (maxi2 = a, maxi3 = b) : (maxi2 = b, maxi3 = a);
    }
    cout << "Largest " << maxi << endl
         << "Second Largest " << maxi2 << endl
         << "Third Largest " << maxi3 << endl
         << endl;
}

void get_minimum(int a, int b, int c)
{
    int mini, mini2, mini3;
    if (a <= b && a <= c)
    {
        mini = a;
        (b <= c) ? (mini2 = b, mini3 = c) : (mini2 = c, mini3 = b);
    }
    else if (b <= a && b <= c)
    {
        mini = b;
        (a <= c) ? (mini2 = a, mini3, c) : (mini2 = c, mini3 = a);
    }
    else if (c <= a && c <= b)
    {
        mini = c;
        (a <= b) ? (mini2 = a, mini3 = b) : (mini2 = b, mini3 = c);
    }
    cout << "MIN1 : " << mini << endl
         << "MIN2 : " << mini2 << endl
         << "MIN3 : " << mini3 << endl
         << endl;
}

void get_fibonacci(int a, int b, int t)
{
    if (t == 1)
    {
        cout << a << "\n";
    }
    else if (t == 2)
    {
        cout << a << " " << b << "\n";
    }
    else
    {
        cout << a << " " << b << " ";
        while (t - 2 > 0)
        {
            int nextnum = a + b;
            a = b;
            b = nextnum;
            cout << nextnum << " ";
            t--;
        }
        cout << "\n";
    }
}

/*
    ITERATIVE

    REVERSE ARRAY                      (DONE)
    SUM TILL N                         (DONE)
    FACTORIAL                          (DONE)
    CHECK STRING PALINDROME            (DONE)

*/

void iterative_reverse_array(vector<int> &v)
{
    print_vector(v);
    int i = 0, n = v.size();
    while (i < n / 2)
    {
        swap(v[i], v[n - 1 - i]);
        i++;
    }
    print_vector(v);
}

void iterative_sumn(int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += i;
    }
    cout << "SUM : " << ans << endl;
}

void iterative_factorialn(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    cout << "Factorial : " << ans << endl;
}

void iterative_chk_str_palindrome(string s)
{
    int n = s.size(), i = 0;
    bool flag = 1;
    while (i < n / 2)
    {
        if (s[i] != s[n - 1 - i])
        {
            flag = 0;
            break;
        }
        i++;
    }
    if (flag == 0)
        cout << "Not Palindrome\n";
    else
        cout << "Palindrome\n";
}

/*
    RECURSION

    PRINT NAME                          (DONE)
    PRINT 1 TO N                        (DONE)
    PRINT N TO 1                        (DONE)
    PRINT 1 TO N BACKTRACK              (DONE)
    PRINT N TO 1 BACKTRACK              (DONE)
    SUM OF FIRST N                      (DONE)
    FACTORIAL OF N                      (DONE)
    FIBONACCI                           (DONE)
    REVERSE ARRAY                       (DONE)
    STRING PALINDROME CHECK             (DONE)
*/

void print_name(int i, int n)
{
    if (i > n)
        return;
    cout << "Rayirth ";
    print_name(i + 1, n);
}

void print_1ton(int i, int n)
{
    if (i > n)
        return;
    cout << i << " ";
    print_1ton(i + 1, n);
}

void print_nto1(int i, int n)
{
    if (i < n)
        return;
    cout << i << " ";
    print_nto1(i - 1, n);
}

void print_1ton_back(int i, int n)
{
    if (i < n)
        return;
    print_1ton_back(i - 1, n);
    cout << i << " ";
}

void print_nto1_back(int i, int n)
{
    if (i > n)
        return;
    print_nto1_back(i + 1, n);
    cout << i << " ";
}

int functional_sum(int n)
{
    if (n == 0)
        return 0;
    return n + functional_sum(n - 1);
}

int parameterised_sum(int i, int n)
{
    if (i == 0)
    {
        return n;
    }
    return parameterised_sum(i - 1, n + i);
}

int functional_factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * functional_factorial(n - 1);
}

int parameterised_factorial(int i, int n)
{
    if (i == 0)
    {
        return n;
    }
    return parameterised_factorial(i - 1, n * i);
}

int recursive_get_fibonacci(int a, int b, int t)
{
    if (t == 1)
        return a;
    if (t == 2)
        return b;
    return recursive_get_fibonacci(a, b, t - 1) + recursive_get_fibonacci(a, b, t - 2);
}

void recursive_reverse_array(vector<int> &v, int i)
{
    if (i >= v.size() / 2)
        return;
    swap(v[i], v[v.size() - 1 - i]);
    recursive_reverse_array(v, i + 1);
}

bool recursive_chk_str_palindrome(string s, int i, int j)
{
    if (i > j)
        return true;
    if (s[i] != s[j])
        return false;
    return recursive_chk_str_palindrome(s, i + 1, j - 1);
}

/*
    HASHING

    get integer frequency
    get character frequency
    get max min frequency
*/

void get_int_frequency(vector<int> &v, int ele)
{
    int n = v.size();

    // BRUTE
    // vector<bool> visited(n, false);
    // for (int i = 0; i < n; i++)
    // {
    //     int cnt = 0;
    //     if (visited[i] == true)
    //         continue;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (v[i] == v[j])
    //         {
    //             cnt++;
    //             visited[j] = true;
    //         }
    //     }
    //     cout << v[i] << " --> " << cnt << endl;
    // }

    // OPTIMISED
    // using hash array
    // int hash_arr[8] = {0};
    // for (int i = 0; i < n; i++)
    // {
    //     hash_arr[v[i]]++;
    // }
    // cout << ele << " --> " << hash_arr[ele] << endl;

    // using map
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
    cout << ele << " --> " << mp[ele] << endl;
}

void get_char_frequency(string s, char ele)
{
    int n = s.size();
    // BRUTE
    // vector<bool> visited(n, false);
    // for (int i = 0; i < n; i++)
    // {
    //     int cnt = 0;
    //     if (visited[i] == true)
    //         continue;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (s[i] == s[j]){
    //             cnt++;
    //             visited[j] = true;
    //         }
    //     }
    //     cout << s[i] << " --> " << cnt << endl;
    // }

    // OPTIMISED --> hash array
    // int hash_arr[26] = {0};
    // for (int i = 0; i < n; i++)
    // {
    //     hash_arr[s[i] - 'a']++;
    // }
    // cout << ele << " --> " << hash_arr[ele - 'a'];

    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    cout << ele << " --> " << mp[ele] << endl;
}

void get_maxmin_frequency(vector<int> &v)
{
    int n = v.size(), max_cnt = INT_MIN, min_cnt = INT_MAX, max_ele, min_ele;
    // BRUTE
    // vector<bool> visited(n, false);
    // for (int i = 0; i < n; i++)
    // {
    //     int cnt = 0;
    //     if (visited[i] == true)
    //     {
    //         continue;
    //     }
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (v[i] == v[j])
    //         {
    //             cnt++;
    //             visited[j] = true;
    //         }
    //     }
    //     if (cnt > max_cnt)
    //     {
    //         max_cnt = cnt;
    //         max_ele = v[i];
    //     }
    //     if (cnt < min_cnt)
    //     {
    //         min_cnt = cnt;
    //         min_ele = v[i];
    //     }
    // }

    // OPTIMISED
    // int hash_arr[8] = {0};
    // for (int i = 0; i < n; i++)
    // {
    //     hash_arr[v[i]]++;
    // }
    // for (int i = 1; i < 8; i++)
    // {
    //     if (hash_arr[i] > max_cnt)
    //     {
    //         max_cnt = hash_arr[i];
    //         max_ele = i;
    //     }
    //     if (hash_arr[i] < min_cnt)
    //     {
    //         min_cnt = hash_arr[i];
    //         min_ele = i;
    //     }
    // }

    unordered_map<int, int> mp;
    // precomputation
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
    // fetching
    for (auto it : mp)
    {
        if (it.second > max_cnt)
        {
            max_cnt = it.second;
            max_ele = it.first;
        }
        if (it.second < min_cnt)
        {
            min_cnt = it.second;
            min_ele = it.first;
        }
    }

    cout << "Max : " << max_ele << " --> " << max_cnt << endl
         << "Min : " << min_ele << " --> " << min_cnt << endl;
}

/*
    SORTING

    SELECTION
    BUBBLE
    INSERTION
    MERGE
    QUICK
*/

// find minimum and swap it
void selection_sort(vector<int> &v)
{
    print_vector(v);

    int n = v.size();

    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (v[mini] > v[j])
                mini = j;
        }
        if (mini != i)
        {
            swap(v[mini], v[i]);
        }
    }

    print_vector(v);
}

// push max to last using adjacent swaps
void bubble_sort(vector<int> &v)
{
    print_vector(v);

    int n = v.size();

    for (int i = 1; i <= n - 1; i++)
    {
        bool did_swap = 0;
        for (int j = 0; j <= n - 1 - i; j++)
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

// pick an element and put it at its correct position in sorted array
void insertion_sort(vector<int> &v)
{
    print_vector(v);

    int n = v.size();

    for (int i = 1; i < n; i++)
    {
        int tmp = v[i];
        int j = i - 1;

        while (j >= 0 && tmp < v[j])
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = tmp;
    }

    print_vector(v);
}

// recurse the pass for adjacent swaps
void recursive_bubble_sort(vector<int> &v, int i)
{
    if (v.size() == 0 || v.size() == 1)
        return;
    if (i == v.size())
        return;

    bool did_swap = 0;

    for (int j = 0; j <= v.size() - 1 - i; j++)
    {
        if (v[j] > v[j + 1])
        {
            swap(v[j], v[j + 1]);
            did_swap = 1;
        }
    }

    if (did_swap == 0)
        return;

    recursive_bubble_sort(v, i + 1);
}

// recurse the process to put element in sorted array
void recursive_insertion_sort(vector<int> &v, int i)
{
    if (v.size() == 0 || v.size() == 1)
        return;
    if (i == v.size())
        return;

    int j = i - 1, tmp = v[i];
    while (j >= 0 && v[j] > tmp)
    {
        v[j + 1] = v[j];
        j--;
    }
    v[j + 1] = tmp;

    recursive_insertion_sort(v, i + 1);
}

// divide and merge
void merge(vector<int> &v, int low, int mid, int high)
{
    int n = v.size();
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

// pick a pivot and put it at its correct position, smaller on left and larger on right
int partition(vector<int> &v, int low, int high)
{
    int pivot = v[low];
    int i = low, j = high;
    while (i < j)
    {
        while (pivot >= v[i])
        {
            i++;
        }
        while (pivot < v[j])
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
        int part_indx = partition(v, low, high);
        quick_sort(v, low, part_indx - 1);
        quick_sort(v, part_indx + 1, high);
    }
}

int main()
{
    vector<int> v = {23, 11, -100, 0, 6, 42, 12, -23, -43, -55, 29, 94, 98, 85, 66, 54, 35, 42, 60, 70};
    string s = "abcsdeqwdsasdsa";
    vector<int> v2 = {4, 2, 1, 4, 3, 1, 2, 3, 4, 7, 6};

    vector<int> v3 = {32, 11, 15, 1, -5, -34, -53, -100, 98, 1, 0, -3, -40, 21, 47, 66, 59, 82, 88, 98, -29};

    // get_int_frequency(v2, 4);
    // get_char_frequency(s, 's');
    // get_maxmin_frequency(v2);
    return 0;
}