#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d,cnt=0;
    cin>>k>>l>>m>>n>>d;
    while(d--)
    {
        if(d%k == 0 || d%l == 0 || d%m == 0 || d%n == 0)
                cnt++;
        }
        cout<<cnt<<endl;
    return 0;
}