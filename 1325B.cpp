#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,ans=0;
    cin >>t;
    while (t--)
    {
        int n;cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for (int i = 0; i < n; i++)
        {
            if (a[i]<a[i+1])
            {
                ans++;
            }
        }    
        cout<<ans<<endl;
    }
    
    return 0;
}