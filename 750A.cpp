#include <iostream>
using namespace std;
int main()
{
    int i,n,k,time,ans=0,t=0;
    cin >> n >> k;
    time = 240 - k;
    for (i = 1; i <= n; i++)
    {
        if (i*5<=time)
        {
            time=time-(i*5);t++;
        }
        
    }
    cout<<t;
    return 0;
}