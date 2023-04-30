#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int a=n*m;
        if (a%2==0) cout<<a/2<<endl;
        else cout<<a/2+1<<endl;
        
    }
    
    return 0;
}