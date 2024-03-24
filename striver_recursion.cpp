#include<bits/stdc++.h>

using namespace std;

/*
    Recursion --> when a function calls itself
                  until specified condition is met

    Base Case --> condition for when to end recursion

    Stack overflow --> stores function yet to be executed

    Recrusion Tree --> diagrammic explaination, for recursion
*/

int cnt = 0;

void func()
{
    if (cnt == 3){
        return ;
    }
    cout << cnt << " ";
    cnt++;
    func();
}

int main()
{
    func();
    return 0;
}