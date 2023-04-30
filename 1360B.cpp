#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x=0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        for (int i = 0; i < n; i++)
        {
            if (a[i]==a[i+1])
            {
                x++;
            }
            
        }
        if (x > 0)
        {
            cout << "0" <<endl;
        }
        else{
            int ans = a[1] - a[0];    
            cout << ans << endl;
        }
    }
    
    return 0;
}