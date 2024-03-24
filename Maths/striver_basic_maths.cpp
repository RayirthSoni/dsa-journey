#include <bits/stdc++.h>

using namespace std;

/*
    Digit Concept           --> done in 2 ways      --> brute force and logarithmic

    7781    -->     7781 % 10 = 1    -->    7781 / 10 = 778.1      |  last digit = 1
    7781    -->      778 % 10 = 8    -->     778 / 10 = 77.8       |  last digit = 8
    7781    -->       77 % 10 = 7    -->      77 / 10 = 7.7        |  last digit = 7
    7781    -->        7 % 10 = 7    -->       7 /10  = 0.7        |  last digit = 7

    Reverse Num
    Palindrome          --> reverse number and original number equal
    Armstorng Number    --> sum of cubes of each digit is equal to number
    All Dvisors         --> done in 2 ways    -->   brute and optimised
    Prime               --> brute force and optimised manner
    GCD or HCF
    Euclid Algorithm
*/

int digit_count(int num)
{
    int count = 0;
    while (num > 0)
    {
        int ld = num % 10;
        count++;
        num /= 10;
    }
    return count;
}

int digit_count_log(int num)
{
    int dig_count;
    dig_count = log10(num) + 1;
    return dig_count;
}

int reverse_number(int num)
{
    int rev_num = 0;
    int temp = num;
    while (num > 0)
    {
        int ld = num % 10;
        rev_num = (rev_num * 10) + ld;
        num /= 10;
    }

    return rev_num;
}

bool is_palindrome(int num)
{
    int temp = num, rev_num = 0;
    while (num > 0)
    {
        int ld = num % 10;
        rev_num = (rev_num * 10) + ld;
        num /= 10;
    }
    return (rev_num == temp);
}

bool is_armstrong(int num)
{
    int temp = num, arm_num = 0;
    while (num > 0)
    {
        int ld = num % 10;
        arm_num = pow(ld, 3) + arm_num;
        num /= 10;
    }
    return (arm_num == temp);
}

void brute_divisors(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
}

vector<int> optimised_divisors(int num)
{
    vector<int> ans;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            ans.push_back(i);
            if (num / i != i)
            {
                ans.push_back(num / i);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

void brute_prime(int num)
{
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    (count == 2) ? cout << "It is Prime Number" : cout << "It is not Prime Number";
}

void optimised_prime(int num)
{
    int cnt = 0;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            cnt++;
            if (num / i != i)
            {
                cnt++;
            }
        }
    }
    (cnt == 2) ? cout << "Prime" : cout << "Not prime";
}

int brute_gcd(int a, int b)
{
    int ans;
    for (int i = min(a, b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            ans = i;
            break;
        }
    }
    return ans;
}

int optimised_gcd(int a, int b)
{
    int ans;
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a %= b;
        }
        else
        {
            b %= a;
        }
    }
    (a==0) ? ans=b : ans=a;
    return ans;
}

int main()
{
    return 0;
}