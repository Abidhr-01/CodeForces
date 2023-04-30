#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        string s1,s2;
        cin>>n;
        cin>>s1>>s2;
        for (int i = 0; i < n; i++)
        {
            if (s1[i]=='B') s1[i]='G';
            if (s2[i]=='B') s2[i]='G';
        }
        if(s1==s2) cout <<"Yes"<<endl;
        else cout <<"No"<<endl;
    }
    
    return 0;
}