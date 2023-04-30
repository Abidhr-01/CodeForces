#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >>n;
        string s[n];
        char s1[n];
        for (int i = 0; i < n; i++)
        {
            cin >>s1[i];
        }
        sort(s1,s1+n);
        int ans=s1[n-1];
        cout << ans << int(ans);
    }
    return 0;
}