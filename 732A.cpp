#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,r;
    cin>>k>>r;
    int s=0;
    for (int i = 1;; i++)
    {
        
        s+=k;
        if ((s%10==0) || (s%10==r))
        {
            cout<<i;
            break;
        }
        else continue;
    }
    
    
    
    return 0;
}