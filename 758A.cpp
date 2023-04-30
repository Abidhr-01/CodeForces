#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    int k = n*a[n-1];
    for (int i = 0; i < n; i++)
    {
        s+=a[i];
    }
    cout<<k-s<<endl;
    return 0;
}