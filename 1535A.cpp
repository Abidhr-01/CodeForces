#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,w1,w2;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> a[4];
            if (a[0]>a[1] ) w1 = a[0];
            else w1 = a[1];
            if (a[2]>a[3]) w2 = a[2];
            else w2 = a[3];
            
        }
        sort(a,a+4);
        if (w1>w2 && w1 == a[3] && w2==a[2])
        {
            cout<< "NO"<<endl;
        }
        else if (w2>w1 && w2==a[3] && w1==a[2])
        {
            cout<<"YES"<<endl;
        }
        
    }
    
    return 0;
}