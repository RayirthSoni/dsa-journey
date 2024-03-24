#include <bits/stdc++.h>

using namespace std;

/*
    Print Name 5 times
    Print Linearly from 1 to N
    Print Linearly from N to 1
    Print Linearly from 1 to N (using backtracking)
    Print Linearly from N to 1 (using backtracking)
    Sum of first N numbers  --> 2 ways  --> functional and paramterised
    Factorial of N numbers  --> 2 ways  --> functional and parameterised
*/

// int cnt = 1;

// void print_name(int i,int n)
void print_name(int i, int n)
{
    if (i > n)
    {
        return;
    }
    // if(cnt > n){
    //     return;
    // }
    cout << "Rayirth"
         << " ";
    print_name(i + 1, n);
}

void print_1_to_n(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << " ";
    print_1_to_n(i + 1, n);
}

void print_n_to_1(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    cout << i << " ";
    print_n_to_1(i - 1, n);
}

void print_1_to_n_back(int i,int n)
{
    if(i<1){
        return;
    }
    print_1_to_n_back(i-1,n);
    cout << i << " ";
}

void print_n_to_1_back(int i,int n)
{
    if(i>n){
        return;
    }
    print_n_to_1_back(i+1,n);
    cout << i << " ";
}

int functional_sum(int num)
{
    if(num == 0){
        return 0;
    }
    return num + functional_sum(num-1);
}

int functional_factorial(int num)
{
    if (num == 0){
        return 1;
    }
    return num * functional_factorial(num-1);
}

int parameterised_sum(int num,int sum)
{
    if(num <= 0){
        return sum;
    }
    parameterised_sum(num - 1, sum + num);
}

int parameterised_factorial(int num,int ans)
{
    if(num == 0){
        return ans;
    }
    parameterised_factorial(num-1,ans*num);
}

int main()
{
    int n;
    cout << "Enter Number = ";
    cin >> n;
    // print_name(n);
    print_name(1, n);
    cout << endl;
    print_1_to_n(1, n);
    cout << endl;
    print_n_to_1(n, n);
    cout << endl;
    print_1_to_n_back(n,n);
    cout << endl;
    print_n_to_1_back(1,n);
    cout << endl;
    cout << "Functional Sum = " << functional_sum(n) << endl;
    cout << "Parameterised Sum = " << parameterised_sum(n,0) << endl;
    // parameterised_sum(n,0);
    cout << "Functional Factorial = " << functional_factorial(n) << endl;
    cout << "Parameterised Factorial = " << parameterised_factorial(n,1) << endl;
    return 0;
}