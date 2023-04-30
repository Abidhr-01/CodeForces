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
            if (a[i]%2==1)s++;
        }
        if(s%2==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
    return 0;
}