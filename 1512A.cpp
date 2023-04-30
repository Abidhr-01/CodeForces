#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >>n;
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i]!=a[i+1])
            {
                if (a[i]!=a[i+2])
                {
                    cout<<i<<endl;
                    break;
                }
                if (a[i+1]!=a[i+2])
                {
                    cout<<i+1<<endl;
                    break;
                }
                
            }
            
        }
        
    }

    return 0;
}