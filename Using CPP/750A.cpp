#include <iostream>
using namespace std;
int main()
{
    int n,k,time,ans=0,t=0;
    cin >> n >> k;
    time = 240 - k;
    for (int i = 1; i <= n; i++)
    {
        t = i*5;
        ans+=t;
        if (ans<=time)
        {
            cout << ans;
        }
        
    }
    
    return 0;
}