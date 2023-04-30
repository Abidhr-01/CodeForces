#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin >> s1;
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    cin >> s2;
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    if (s1==s2)
    {
        cout << "0"<<endl;
    }
    
    for (int i = 0; i < s1.size(); i++)
    {
        
        if (s1[i]<s2[i])
        {
            cout << "-1";
            break;
        }
        if (s1[i]>s2[i])
        {
            cout << "1"<<endl;
            break;
        }
       
    }
    return 0;
}