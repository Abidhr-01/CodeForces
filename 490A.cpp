#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=0,c=0;
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
        if (ar[i]==1) a++;
        if (ar[i]==2) b++;
        if (ar[i]==3) c++;
    }
    cout<<min(min(a,b),c)<<endl;
    return 0;
}