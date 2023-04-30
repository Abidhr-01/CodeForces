#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 1; i<=1666; i++)
    {
        if (i%3!=0 && i%10!=3)
        {
            v.push_back(i);
        }
    }
    
    int t;
    cin>>t;
    while (t--)
    {
        int k;
        cin>>k;
        k--;
        cout<<v[k]<<endl;
    }
    
    return 0;
}