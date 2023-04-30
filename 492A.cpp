#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = sqrt(n);
    if (ans*ans==n && n>=2)
    {
        cout <<ans-1<<endl;
    }
    else 
        cout << ans << endl;
    return 0;
}