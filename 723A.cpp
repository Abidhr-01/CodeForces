#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,l,s;
    cin >> a >> b >> c;

    if (a<b && b<c)
    {
        l=c;
        s=a;
    }
    else if(a>b && b>c)
    {
        l=a;
        s=c;
    }
    else if (a<b && b>c)
    {
        l=b;
        if (c>a)
            s=a;
        else
            s=c;
    }
    else
    {
        s=b;
        if (c>a)
            l=c;
        else
            l=a;
    }
    cout << l-s;
    return 0;
}