#include <bits/stdc++.h>
int main()
{
    int n=0,k=0;
    cin>>n>>k;
    for (int i = 1; i <= k; i++)
    {
        int s = n%10;
        if (s==0)
        {
            n/=10;
        }
        else
        {
            n-=1;
        }
        
    }
    cout<<n;
    return 0;
}