#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >>a>>b>>c>>n;
        if ((a+b+c+n)%3==0) cout << "YES"<<endl;
        else cout << "NO"<<endl; 
    }
    
    return 0;
}