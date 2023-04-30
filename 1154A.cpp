#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],ans;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    sort(a,a+4);
    for (int i = 0; i < 3; i++)
    {
        ans=a[3]-a[i];
        cout<<ans<<" ";
    }
    
    return 0;
}