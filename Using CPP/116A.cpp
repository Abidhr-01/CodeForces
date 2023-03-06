#include <iostream>
using namespace std;
int main()
{
    int n,exit, enter, cap=0,ans=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> exit >> enter;
        cap = (exit+ans)-enter;
        if (cap<0)
            ans=0;
        else
            ans = cap;
    }
    
    if (ans > cap)
    {
        cap=ans;
    }
    cout << cap;
    
    return 0;
}