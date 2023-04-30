#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,res=0;
    cin>>a;
    cin>>b;
    cin>>c;
    if (res<a+b+c)
    {
        res=a+b+c;
    }
    if (res<a*b*c)
    {
        res=a*b*c;
    }
    if (res<(a+b)*c)
    {
        res=(a+b)*c;
    }
    if (res<a*(b+c))
    {
        res=a*(b+c);
    }
    cout<<res<<endl;
    return 0;
}