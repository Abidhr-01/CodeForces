#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        if (s == "c" ||s == "o" ||s == "d" ||s == "e" ||s == "f"||s == "r" ||s == "s")
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
        
    }
    
    return 0;
}