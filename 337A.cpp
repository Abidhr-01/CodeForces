#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int ar[y];
    for (int i = 0; i < y; i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+y);
    cout<<ar[x-1]-ar[0];
    return 0;
}