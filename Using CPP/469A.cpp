#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,p, x,y,ar[200
    ],ans=0;
    cin >> p >> x;
    for (i = 0; i < x; i++)
    {
        cin >> ar[i];
    }
    cin >> y;
    for (i = x; i < x+y; i++)
    {
        cin >> ar[i];
    }
    sort(ar,ar+(x+y));
    for (i = 0; i < x+y; i++)
    {
        if (ar[i] != ar[i+1])
        {
            ans++;
        }
    }
    if (ans == p)
    {
        cout << "I become the guy.";
    }
    else
        cout << "Oh, my keyboard!";
    return 0;
}