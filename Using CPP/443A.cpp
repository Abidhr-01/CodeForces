#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    cin.getline(s,1000);
    sort(s.begin(),s.end());
    cout << s;
    int ans=0;
    for(int i=1; i<s.length(); i++)
    {
        if(s[i]!=s[i-1])
            ans++;
    }
    cout << ans;
    return 0;
}