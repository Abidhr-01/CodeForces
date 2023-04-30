#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int x,y,n;
        cin>>x>>y>>n;
        while (true)
        {
            if (n%x==y)
            {
                cout<<n<<endl;
                break;
            }
            else n--;
        }
        
    }
    
    return 0;
}