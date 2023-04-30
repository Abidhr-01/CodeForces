#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n,m;
    cin>>n>>m;
    for (int i = 1; i <= n; i++)
    {
        if(i%2==1) v.push_back(i);
    }
    for (int i = 2; i <= n; i++)
    {
        if(i%2==0) v.push_back(i);
    }
    cout<<v[m-1]<<endl;
    return 0;
}