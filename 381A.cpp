#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int s=0,d=0;
    for (int i = n; i >= 1; --i)
    {
        if(i%2==0)
        {
            d+=a[i];
        }
        else
        {
            s+=a[i];
        }
    }
    cout<<s<<" "<<d;
    return 0;
}