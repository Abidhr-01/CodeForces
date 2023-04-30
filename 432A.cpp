#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ans=0;
    cin>>n>>k;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for (int i = 2; i <= v.size(); i+=3)
    {
        if(v[i]+k<=5)
            ans++;
    }
    cout<<ans;

    return 0;
}