#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,s=0;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        sort(a,a+n);
        cout<<s-(a[0]*n)<<endl;
    }
    
    return 0;
}